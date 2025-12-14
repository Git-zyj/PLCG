/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95009
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))) != (((((/* implicit */_Bool) min((var_16), (((/* implicit */long long int) 1956522322))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (((unsigned int) var_18))))));
    var_20 += ((/* implicit */unsigned int) var_15);
    var_21 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_10)))))) * (var_13))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) 16383U)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((var_1) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_12))) : (min((var_12), (((/* implicit */long long int) var_0)))))) - (116LL)))));
}
