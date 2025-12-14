/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93159
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
    var_18 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) (unsigned char)118))))))))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_16) ? (((((/* implicit */_Bool) (unsigned char)137)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)118))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) != (6013551292522515203LL)))))))) ? (((/* implicit */int) ((short) var_3))) : (((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */long long int) (-(10319437321176353925ULL)));
                arr_4 [i_0] = ((/* implicit */short) (((((!(((/* implicit */_Bool) arr_0 [i_0] [i_1])))) || (((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_0 [i_1] [5ULL])), ((unsigned char)118)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) min((arr_3 [i_0 - 3] [i_0]), (((/* implicit */int) (unsigned char)255))))))) : (((max((4642665539657210395LL), (((/* implicit */long long int) (unsigned char)251)))) << ((((((-(((/* implicit */int) arr_1 [i_0])))) + (43865))) - (7)))))));
                var_21 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */int) var_8)) : (min((((/* implicit */int) arr_1 [(short)10])), (537852268)))));
                var_22 = ((/* implicit */int) min((1445941370U), (((/* implicit */unsigned int) arr_3 [i_0] [i_1 + 3]))));
            }
        } 
    } 
}
