/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79433
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
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-29995))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)69))) : (6883159629345978704ULL)))) ? (((/* implicit */int) (unsigned short)28645)) : ((+(((/* implicit */int) var_1)))))))));
    var_16 += ((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-1))))), (max((((/* implicit */unsigned long long int) (short)9)), (2190433320960ULL)))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_0 [i_2]), (((/* implicit */int) (signed char)25)))))));
                    arr_8 [i_0 - 2] [i_1] [i_2] [i_2] = ((/* implicit */short) ((long long int) ((int) ((((/* implicit */_Bool) (signed char)24)) && (((/* implicit */_Bool) (unsigned short)36890))))));
                    var_18 = ((/* implicit */unsigned char) arr_3 [i_0]);
                }
            } 
        } 
        /* LoopSeq 3 */
        for (short i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            arr_11 [i_0 + 1] [i_3] = ((/* implicit */_Bool) var_0);
            var_19 -= ((/* implicit */short) (unsigned short)36909);
        }
        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            arr_14 [i_0] [i_4] [i_4] = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_0 - 2] [i_4] [i_4]))))), (var_5)))));
            var_20 = ((/* implicit */signed char) ((unsigned long long int) ((unsigned int) (unsigned char)171)));
        }
        for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 16177922353163101178ULL)) || (((/* implicit */_Bool) var_10)))))) > (((arr_16 [i_0] [i_5 - 1]) - (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_5]))))))));
            var_22 = ((/* implicit */signed char) arr_12 [i_0]);
        }
        arr_17 [i_0 - 2] = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (signed char)-91)))), (min(((+(((/* implicit */int) (short)0)))), (((/* implicit */int) var_8))))));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 20; i_6 += 2) 
        {
            for (short i_7 = 4; i_7 < 22; i_7 += 3) 
            {
                {
                    arr_24 [1ULL] [i_6 + 2] [i_6] [i_7] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 380392536U)) != (((((/* implicit */_Bool) 16177922353163101178ULL)) ? (36028797018963967ULL) : (13084272169584842029ULL)))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 580679301268095178ULL)) ? (-7578875594957462099LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)14)))))), (16177922353163101178ULL)))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(1028715200388814951LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_0 + 1] [i_6 + 2] [i_7 - 2])) + (((/* implicit */int) arr_18 [i_0 + 1] [i_6 + 1] [i_7 - 2]))))) : (((((/* implicit */_Bool) arr_18 [i_0 - 1] [i_6 + 2] [i_7 - 3])) ? (15121545460399832394ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0 - 1] [i_6 + 3] [i_7 - 3])))))));
                    var_24 = ((/* implicit */_Bool) max((var_24), ((!(((/* implicit */_Bool) ((int) ((18410715276690587648ULL) * (var_5)))))))));
                    arr_25 [22ULL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -9LL))));
                }
            } 
        } 
    }
    var_25 += ((/* implicit */unsigned short) ((max(((-(((/* implicit */int) var_3)))), (((/* implicit */int) var_13)))) / (((/* implicit */int) var_10))));
}
