/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89280
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
    var_19 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */signed char) ((((/* implicit */int) var_13)) > (((/* implicit */int) min(((signed char)104), (((/* implicit */signed char) (_Bool)1))))))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned int) min((((/* implicit */long long int) min(((((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_14))))), (((((/* implicit */long long int) ((((/* implicit */_Bool) -8787106225279652408LL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_17))))) & (var_16)))));
            var_21 -= arr_0 [12U];
        }
        arr_4 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    /* vectorizable */
    for (unsigned char i_2 = 2; i_2 < 21; i_2 += 3) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */unsigned short) (((!(var_10))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_2]))))) : (((/* implicit */int) arr_2 [i_2] [i_2 - 2] [i_2 - 1]))));
        arr_10 [(unsigned short)16] |= ((/* implicit */long long int) ((var_12) / (((/* implicit */int) var_8))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (short i_4 = 3; i_4 < 20; i_4 += 2) 
            {
                {
                    arr_18 [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) var_10);
                    var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) arr_1 [(short)12])) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) ((short) (signed char)97))) : (((/* implicit */int) var_17))));
                }
            } 
        } 
    }
    for (int i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        arr_22 [i_5] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-99)) || (((/* implicit */_Bool) max(((unsigned char)129), (((/* implicit */unsigned char) var_6)))))));
        arr_23 [i_5] [i_5] |= max((((/* implicit */long long int) (+(((/* implicit */int) var_5))))), (((max((var_11), (var_10))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_5] [17U]))) : (4423651529836560751LL))) : (((/* implicit */long long int) ((/* implicit */int) var_3))))));
        arr_24 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_19 [(unsigned short)18] [i_5]), (((/* implicit */unsigned char) var_9))))) ? (((/* implicit */int) var_18)) : (((((/* implicit */_Bool) (unsigned short)25665)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_13))))))) ? (1572595770864113323LL) : (((/* implicit */long long int) ((int) max((((/* implicit */signed char) var_3)), (var_5)))))));
    }
    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) 
    {
        arr_27 [(_Bool)1] [i_6] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((2153992147U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28009)))))), (((((((/* implicit */int) (short)-32750)) > (((/* implicit */int) var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) var_9)), (arr_6 [i_6]))))) : (var_16)))));
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_3 [i_6] [i_6]) & (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (max((((/* implicit */long long int) arr_3 [i_6] [i_6])), (20LL))) : (((/* implicit */long long int) arr_3 [i_6] [i_6]))));
    }
    var_24 += ((/* implicit */short) (!(var_6)));
}
