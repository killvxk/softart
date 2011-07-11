#include <sasl/include/syntax_tree/program.h>

#include <sasl/enums/node_ids.h>
#include <sasl/include/syntax_tree/visitor.h>

BEGIN_NS_SASL_SYNTAX_TREE();

program::program( const std::string& name)
	: node( node_ids::program, boost::shared_ptr<token_t>() ), name(name)
{
}

program::program( boost::shared_ptr<token_t> )
	: node( node_ids::program, boost::shared_ptr<token_t>() )
{
}

SASL_SYNTAX_NODE_ACCEPT_METHOD_IMPL( program );

END_NS_SASL_SYNTAX_TREE();