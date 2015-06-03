#ifndef COMMANDEXECUTOR_H
#define COMMANDEXECUTOR_H

#include <vector>

#include "../Graph/Graph.h"
#include "./Command.h"

class CommandExecutor
{
    public:
        virtual void addGraph(Graph graph) = 0;

        virtual void executeCommand(Command command) = 0;
        virtual void executeCommands(std::vector<Command> commands) = 0;
};

#endif // COMMANDEXECUTOR_H
