/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60553
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 4; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((arr_10 [i_0] [(_Bool)1] [i_2] [i_0] [i_0] [i_2 + 1] [i_0]) >> (((5011611375964862940ULL) - (5011611375964862931ULL))))))));
                            var_13 = ((/* implicit */long long int) 3999352084U);
                            arr_12 [i_0] [i_0] [i_2] [i_0] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_4])))) ? (((/* implicit */long long int) -274993134)) : (arr_3 [i_2 - 4])));
                            var_14 = (_Bool)1;
                            var_15 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)32129))));
                        }
                        var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) 12382522961498314399ULL))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        arr_15 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)24048)) < (((/* implicit */int) (_Bool)1)))))));
                        arr_16 [i_2] [i_2] [i_2] [i_2] [i_5] = min((((/* implicit */int) min((arr_8 [i_0] [i_1] [i_2 - 1] [i_5] [i_1] [i_2] [i_2]), (arr_8 [i_2] [i_1] [i_2 - 4] [i_2] [i_0] [i_2] [i_2])))), ((+(((/* implicit */int) (signed char)62)))));
                        arr_17 [12ULL] [(unsigned char)6] [i_2] [i_2] [12LL] &= ((/* implicit */_Bool) (signed char)-52);
                        var_17 &= ((/* implicit */_Bool) (~(((2581989587U) + (1760281943U)))));
                    }
                    var_18 *= arr_14 [i_0] [i_2] [i_0] [i_2] [i_0];
                    arr_18 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) var_9);
                }
            } 
        } 
    } 
    var_19 &= ((/* implicit */signed char) ((((/* implicit */_Bool) 13435132697744688675ULL)) ? (((6102759072536823460ULL) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)32))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) <= (min((((/* implicit */unsigned long long int) var_5)), (var_7)))))))));
    var_20 = var_2;
}
