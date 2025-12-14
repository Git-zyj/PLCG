/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75007
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
    var_14 *= ((/* implicit */short) ((((/* implicit */_Bool) max(((+(var_10))), (((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */unsigned int) var_8))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (short)-30182))))))) : (((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */int) (signed char)-6)))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) arr_2 [i_0]))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [1LL]) : (((/* implicit */unsigned int) arr_2 [i_0]))))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (short)30185))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (var_0) : (((/* implicit */unsigned long long int) arr_0 [8U] [i_0]))))));
        var_16 += ((/* implicit */unsigned long long int) -9081411136192937358LL);
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [(_Bool)1])) ? (((/* implicit */int) (short)30207)) : (((/* implicit */int) arr_6 [i_1]))))) - (((((/* implicit */long long int) ((/* implicit */int) (short)-30192))) + (arr_4 [i_1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [(unsigned char)7])) ? (((((/* implicit */_Bool) (unsigned short)16383)) ? (arr_4 [i_1]) : (arr_4 [i_1]))) : (min((((/* implicit */long long int) var_5)), (arr_4 [i_1])))))) : (((unsigned long long int) ((((/* implicit */_Bool) 4262334646U)) ? (var_10) : (((/* implicit */unsigned int) var_5)))))));
        arr_7 [i_1] = ((/* implicit */unsigned int) var_0);
        var_18 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) arr_6 [i_1])) - (((/* implicit */int) arr_5 [i_1])))) : (((/* implicit */int) var_13)))))));
        var_19 = ((/* implicit */int) min((var_0), (((/* implicit */unsigned long long int) (+(-5269253775478161384LL))))));
    }
    for (int i_2 = 2; i_2 < 21; i_2 += 1) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2 - 1])) ? (arr_10 [i_2 + 4] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
        var_20 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2])) ? (arr_10 [i_2 + 2] [(signed char)2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_0))))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) -5269253775478161384LL)) >= (arr_10 [i_2] [(_Bool)1])))))) : (((/* implicit */int) (short)21017))));
    }
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        for (int i_4 = 2; i_4 < 15; i_4 += 2) 
        {
            {
                arr_17 [i_3] = ((/* implicit */int) (~(((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)21456))))) + (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4]))) : (var_11)))))));
                arr_18 [i_3] [i_4] [i_3] = ((/* implicit */signed char) var_1);
                arr_19 [i_3] [i_3] &= ((/* implicit */unsigned int) arr_15 [i_4] [i_4]);
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    for (short i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 6903278545465430959ULL)) ? ((+(arr_10 [i_4] [i_4]))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)7))) | (var_10))))));
                            var_22 &= ((/* implicit */unsigned int) max((max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) 7387406438100931493LL)) ? (((/* implicit */int) (short)-11189)) : (((/* implicit */int) arr_9 [i_6])))))), (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)24)))) : (((/* implicit */int) (!(var_12))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
