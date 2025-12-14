/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88633
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0 + 2] = ((/* implicit */_Bool) (~(((/* implicit */int) max(((unsigned short)8086), ((unsigned short)8099))))));
        var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1047701312U))))), ((unsigned short)8075))))));
    }
    for (unsigned short i_1 = 1; i_1 < 9; i_1 += 4) /* same iter space */
    {
        arr_5 [i_1] [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) 1637574591U)) ^ (arr_4 [i_1 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 + 2] [i_1]))) : (arr_4 [i_1])))) ? (((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (arr_4 [i_1 + 2]) : (arr_4 [i_1 - 1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1870614265U)) ? (((/* implicit */long long int) 2127460224)) : (arr_4 [i_1])))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)21628)) < (((/* implicit */int) (unsigned short)8086))))) : (((/* implicit */int) var_4)))))));
        var_11 = ((/* implicit */unsigned int) (((~((-(((/* implicit */int) (short)6229)))))) != (-1916317661)));
        var_12 ^= ((/* implicit */signed char) (+(((((/* implicit */_Bool) (-(1426124015)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-7))) : (((arr_3 [i_1 + 1]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8108)))))))));
    }
    var_13 = ((/* implicit */unsigned short) (+(((int) var_2))));
    var_14 = ((/* implicit */long long int) var_6);
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned int i_3 = 3; i_3 < 20; i_3 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (short i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    var_15 *= ((/* implicit */unsigned char) (unsigned short)21603);
                    var_16 *= ((/* implicit */_Bool) min((((((/* implicit */_Bool) -493838349)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (max((arr_9 [i_2] [i_3] [i_4]), (((/* implicit */long long int) (unsigned short)64314)))))), (((/* implicit */long long int) (((_Bool)0) ? (((((/* implicit */_Bool) 1916317654)) ? (((/* implicit */int) (unsigned short)17987)) : (-1155046730))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-70)) && (((/* implicit */_Bool) (unsigned short)47553))))))))));
                    arr_12 [i_4] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_11 [i_4] [i_4] [i_4] [i_2]) : (((/* implicit */long long int) 1916317660))))) ? (((/* implicit */int) (short)-9105)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2])))))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_6 [i_2]))))), (arr_6 [i_2])))) : (((((/* implicit */_Bool) (~(-1916317661)))) ? ((~(arr_11 [i_2] [i_3] [i_3 - 1] [i_2]))) : (((/* implicit */long long int) (~(arr_6 [i_2]))))))));
                    var_17 = ((/* implicit */unsigned short) arr_9 [i_2] [i_2] [i_4]);
                    arr_13 [i_2] = ((/* implicit */int) min(((+(arr_11 [i_2] [i_3 - 3] [i_3 - 3] [i_2]))), (((/* implicit */long long int) ((int) arr_11 [i_2] [i_3 - 3] [i_2] [i_2])))));
                }
                for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    arr_17 [i_2] = (unsigned short)8072;
                    var_18 |= ((/* implicit */unsigned short) (_Bool)1);
                }
                var_19 = ((/* implicit */signed char) max(((+(9223372036854775807LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_3])))))));
                var_20 = ((/* implicit */unsigned int) ((int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-29563)) : (((/* implicit */int) (unsigned short)57428)))))));
            }
        } 
    } 
}
