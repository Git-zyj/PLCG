/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57795
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_4 [i_1] [(signed char)0] [i_1] |= ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_1 [(signed char)6] [i_1])) ? (arr_2 [i_0] [i_1] [i_0]) : (((/* implicit */int) arr_1 [(_Bool)1] [i_1])))));
                var_12 -= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (((_Bool)1) ? (1546630175U) : (3535585210U)))))) ? (arr_2 [i_0] [i_0] [i_1]) : ((~(((/* implicit */int) arr_3 [i_0] [12U]))))));
                arr_5 [i_0] = ((unsigned short) ((((((/* implicit */_Bool) 5811752338052509006LL)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (short)14148)))) | (var_5)));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    var_13 -= ((/* implicit */unsigned short) var_6);
                    var_14 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */int) var_0)) / (((/* implicit */int) arr_7 [i_0] [i_0]))))) ? (((/* implicit */int) (unsigned short)10459)) : (-1417595523))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2] [i_2 + 1] [i_2 + 1])))))));
                }
            }
        } 
    } 
    var_15 = 3289687854U;
    var_16 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (unsigned short)10459))))), (((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */unsigned int) var_9))))))) ? (((/* implicit */unsigned int) (~(-561839815)))) : (max((((/* implicit */unsigned int) var_11)), (min((((/* implicit */unsigned int) var_1)), (1005279441U)))))));
    /* LoopSeq 1 */
    for (int i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        var_17 = var_4;
        arr_12 [i_3] [i_3] = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)9424)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-126))) : (arr_8 [i_3])))))) ? (((((/* implicit */_Bool) arr_8 [i_3])) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3]))) : (-5811752338052509007LL))) : (-5811752338052509007LL))) : (min((arr_8 [i_3]), (((/* implicit */long long int) ((arr_10 [i_3]) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) arr_10 [i_3]))))))));
        arr_13 [i_3] = ((/* implicit */_Bool) (-(max((-1307807971), (arr_11 [i_3])))));
        arr_14 [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((short) (_Bool)0))), (((arr_10 [i_3]) ? (((/* implicit */unsigned int) var_5)) : (((((/* implicit */_Bool) -1307807971)) ? (arr_9 [i_3]) : (((/* implicit */unsigned int) arr_11 [(unsigned short)21]))))))));
        arr_15 [i_3] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned short) ((arr_10 [i_3]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))))), (arr_8 [i_3])));
    }
}
