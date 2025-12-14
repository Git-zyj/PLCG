/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8079
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
    var_18 &= ((/* implicit */long long int) var_9);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_0 [(unsigned short)16]))));
        var_20 = ((/* implicit */unsigned char) arr_0 [i_0]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_21 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (arr_3 [i_0 + 4] [20U] [i_0])));
            arr_4 [i_0] [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
            arr_5 [i_0] = ((/* implicit */short) ((long long int) var_10));
            var_22 = ((arr_2 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))));
        }
        for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            arr_8 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) & (var_6)))) ? (max((arr_3 [2LL] [i_2] [i_2]), (((/* implicit */long long int) arr_7 [i_2] [(unsigned short)21] [(unsigned short)8])))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_13)))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_2])))));
            var_23 -= ((/* implicit */unsigned char) min(((_Bool)1), ((_Bool)1)));
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (signed char i_4 = 2; i_4 < 20; i_4 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            var_24 |= ((/* implicit */unsigned char) var_11);
                            arr_16 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) -16))) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) var_12)))))));
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
                        }
                        arr_17 [i_0] [i_0] = ((/* implicit */_Bool) (~((~(min((arr_1 [i_0]), (((/* implicit */unsigned long long int) 520093696))))))));
                        var_26 = ((/* implicit */long long int) min((((unsigned long long int) min(((unsigned short)47959), (((/* implicit */unsigned short) (unsigned char)107))))), (((/* implicit */unsigned long long int) var_3))));
                    }
                } 
            } 
            arr_18 [(signed char)2] &= ((/* implicit */short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(arr_6 [i_0] [i_0 + 3] [i_0]))))))), (max((((/* implicit */unsigned int) arr_10 [i_0] [i_2] [(unsigned short)12] [i_2])), (arr_6 [6] [i_2] [i_2])))));
            var_27 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (-(var_7)))) || (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) <= (7463510412213108419ULL)))))) + (max((((((/* implicit */_Bool) arr_3 [i_0] [i_2] [8U])) ? (-15455880) : (((/* implicit */int) (signed char)(-127 - 1))))), (((((/* implicit */int) (unsigned short)0)) + (306084167)))))));
        }
    }
}
