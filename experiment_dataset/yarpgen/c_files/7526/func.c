/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7526
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
    var_12 = ((/* implicit */unsigned short) var_9);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_13 = ((((/* implicit */_Bool) ((unsigned char) arr_0 [(_Bool)1]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) / (1891790034U)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1] [i_1]))) - (((4398046511103ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)179))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (long long int i_3 = 4; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((var_6) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_2])))))))) ? (((/* implicit */unsigned long long int) (-(var_1)))) : (arr_9 [6U] [i_1])));
                            var_15 = ((/* implicit */_Bool) arr_2 [i_1]);
                            var_16 = ((/* implicit */unsigned short) -3262067786304709381LL);
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_17 = ((/* implicit */unsigned short) ((unsigned int) arr_1 [i_0 + 3] [i_0 + 2]));
                                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) 5644671845851629042LL))));
                                var_19 |= ((((/* implicit */_Bool) 2767197117U)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [(unsigned short)4] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_1)) ^ (arr_4 [i_0] [i_3] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3]))) : ((-(var_1)))));
                            }
                            /* vectorizable */
                            for (unsigned char i_5 = 1; i_5 < 12; i_5 += 4) 
                            {
                                arr_17 [1] [i_1] [1] [i_3] [i_3] [i_1] [9U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 + 3] [i_1])) << (((3262067786304709359LL) - (3262067786304709344LL)))))) ? (((/* implicit */long long int) (+(104559289U)))) : (-5644671845851629056LL)));
                                var_21 = ((/* implicit */unsigned short) ((unsigned int) (-(((/* implicit */int) (unsigned char)0)))));
                                arr_18 [i_1] [i_0] [i_2] [(signed char)0] [i_3] = ((/* implicit */unsigned long long int) ((unsigned int) var_9));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
