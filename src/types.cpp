#include "types.h"
//One text parameter, for non enclosed blocks
Block::Block(
    std::string name,
    const BlockTypes blockType,
    std::string text,
    std::vector<std::pair<std::string,
    const std::type_info&>> parameters
    ):
name(std::move(name)),
blockType(blockType),
text(std::move(text), ""),
parameters(std::move(parameters))
{

}

//multi-text parameter, for enclosed blocks
Block::Block(
    std::string name,
    const BlockTypes blockType,
    std::pair<std::string, std::string> text,
    std::vector<std::pair<std::string,
    const std::type_info&>> parameters
):
name(std::move(name)),
blockType(blockType),
text(std::move(text)),
parameters(std::move(parameters))
{

}
