/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83793
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) var_0)) | (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) == (max((((/* implicit */long long int) var_0)), (-7019800594816653306LL)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            var_11 = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [(signed char)7] [i_1])) && (((/* implicit */_Bool) arr_1 [(signed char)12]))))) - (min((656805212), (((/* implicit */int) arr_0 [i_0] [i_1])))))) & (((/* implicit */int) arr_2 [i_0]))));
            var_12 = ((/* implicit */_Bool) 17179869183LL);
        }
        var_13 = ((/* implicit */signed char) min(((~(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_6 [i_0] [i_0]))))), (((/* implicit */long long int) min((var_0), (((signed char) 656805212)))))));
        var_14 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) arr_7 [(signed char)10] [i_0]))))))));
        var_15 = ((/* implicit */long long int) arr_7 [(signed char)4] [(signed char)4]);
    }
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            var_16 = ((/* implicit */_Bool) max((-656805212), (-656805213)));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_4 = 1; i_4 < 16; i_4 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    var_17 *= ((/* implicit */unsigned char) -6984735141448487813LL);
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_4] [i_4 + 2] [i_4 - 1] [i_4 - 1])) ? (((/* implicit */int) arr_13 [i_4] [i_4 + 2] [i_4 + 2] [i_4 - 1])) : (((/* implicit */int) arr_12 [i_4] [i_4 - 1] [i_4 - 1] [i_4 + 2]))));
                }
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) -6984735141448487813LL)) ? (((/* implicit */int) arr_17 [i_2] [(short)2] [i_4])) : (((/* implicit */int) arr_11 [i_2] [i_2] [(signed char)12]))))) < (-6984735141448487813LL))))));
            }
            for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                var_20 = ((/* implicit */short) (+(max((((int) (short)6962)), ((~(((/* implicit */int) arr_13 [i_2] [(short)1] [i_2] [14]))))))));
                var_21 ^= ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_3] [(signed char)5] [i_6] [i_3])) << (((780587191U) - (780587179U)))))) ? (((/* implicit */int) arr_13 [i_2] [i_3] [i_2] [i_2])) : (-1001142255))), (((/* implicit */int) (unsigned short)8743))));
            }
            arr_20 [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) arr_17 [i_2] [i_2] [i_2]);
        }
        var_22 = ((/* implicit */unsigned int) (unsigned short)26622);
    }
    var_23 = ((/* implicit */unsigned short) max((((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-23)))) > (((/* implicit */int) var_3))))), (((((/* implicit */int) var_5)) % (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))))));
}
