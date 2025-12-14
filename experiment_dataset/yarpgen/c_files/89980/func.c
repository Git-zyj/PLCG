/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89980
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            arr_4 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) max((var_6), (((/* implicit */short) var_4))))) == (((/* implicit */int) var_7)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)16128)) ? (((/* implicit */int) (unsigned short)49417)) : (((/* implicit */int) (unsigned short)16128)))) != (-1869185953))))));
            var_10 -= ((/* implicit */short) ((((/* implicit */_Bool) min((((unsigned long long int) var_3)), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */int) arr_2 [i_1])) : (min(((-(((/* implicit */int) var_4)))), (((/* implicit */int) ((var_3) > (((/* implicit */int) arr_3 [i_0])))))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            arr_7 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_3 [i_0])), (var_5)))) ? (((((/* implicit */_Bool) 1286195379U)) ? (2431957031U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18782))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_5 [i_2] [i_2] [i_0])))))));
            var_11 = ((/* implicit */int) ((((/* implicit */long long int) ((((var_9) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_6 [i_2] [(signed char)4] [i_0])))) & (((/* implicit */int) var_6))))) | (max((((((/* implicit */long long int) ((/* implicit */int) var_4))) | (var_2))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */int) arr_3 [i_2])))))))));
        }
        for (unsigned int i_3 = 1; i_3 < 18; i_3 += 1) 
        {
            arr_11 [i_3] = ((((/* implicit */int) (!(((/* implicit */_Bool) min((var_1), (var_3))))))) % (((/* implicit */int) var_6)));
            var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2431957031U)) ? (var_1) : (((/* implicit */int) (signed char)-93))));
        }
        for (short i_4 = 3; i_4 < 18; i_4 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_5 = 2; i_5 < 19; i_5 += 4) 
            {
                var_13 &= ((/* implicit */short) (+((~(((/* implicit */int) arr_8 [i_5]))))));
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_14 [i_4 - 1] [i_4 + 2] [i_5 + 1])) : (((/* implicit */int) var_9))));
                arr_16 [i_0] [(short)2] [i_5] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(var_1))))));
                var_15 = ((/* implicit */long long int) max((var_15), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) 1863010265U)) : (4084906429212341371LL)))));
                var_16 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_4] [i_5]))))) ? (((/* implicit */int) arr_5 [i_5 + 1] [i_4 + 1] [i_4 + 1])) : (((/* implicit */int) var_7)));
            }
            var_17 = ((((/* implicit */_Bool) min((arr_14 [i_4 + 2] [i_4 - 2] [i_0]), (arr_14 [i_4 - 2] [i_4 - 3] [i_4])))) ? (((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) arr_14 [4U] [i_4 + 2] [i_4]))))) : (max((var_3), (((/* implicit */int) var_7)))));
            arr_17 [14ULL] [14ULL] [14ULL] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_14 [i_0] [i_4 - 3] [i_0])) ? (((/* implicit */int) arr_14 [i_0] [i_4 - 3] [i_4 + 1])) : (((/* implicit */int) arr_9 [i_0] [(signed char)14])))), (((((/* implicit */_Bool) max((-4084906429212341384LL), (4084906429212341368LL)))) ? (((((/* implicit */_Bool) (unsigned short)59976)) ? (((/* implicit */int) (short)-32302)) : (((/* implicit */int) var_4)))) : (((((/* implicit */int) var_4)) / (((/* implicit */int) var_7))))))));
        }
        var_18 -= (~(((((/* implicit */_Bool) ((var_2) & (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_0)))));
        arr_18 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 4084906429212341371LL)) ? (((/* implicit */int) (unsigned short)4386)) : (((/* implicit */int) var_4))));
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_6))))), (max((var_2), (((/* implicit */long long int) var_1)))))))));
        arr_19 [i_0] = ((/* implicit */unsigned int) (-(max((max((var_5), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
    }
    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) var_6)) - ((((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) var_6)) : (((((((/* implicit */int) var_7)) + (2147483647))) << (((/* implicit */int) var_4))))))));
    var_21 = max((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_1)) : (var_8)))), (var_5))), (var_2));
    var_22 &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_7)) : ((+(((/* implicit */int) var_7)))))), (((((/* implicit */int) var_9)) ^ (((/* implicit */int) ((var_1) >= (((/* implicit */int) var_4)))))))));
}
