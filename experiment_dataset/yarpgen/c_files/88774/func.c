/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88774
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
    for (unsigned short i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (unsigned short)65472))));
        var_19 = ((/* implicit */int) arr_0 [i_0 - 4] [i_0]);
    }
    /* LoopSeq 1 */
    for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((signed char) (_Bool)1))))) ? (((/* implicit */int) ((short) ((((/* implicit */int) (short)-32762)) >= (((/* implicit */int) var_1)))))) : (var_8)));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 10; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_4 = 1; i_4 < 12; i_4 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (int i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            arr_18 [i_1] [(unsigned char)4] [i_4] [i_3] [i_4 - 1] [(unsigned char)4] [i_5] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_5 [(unsigned char)3] [i_2 + 1]))));
                            var_20 |= ((/* implicit */unsigned long long int) var_2);
                        }
                        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned short) (short)-4310);
                            arr_23 [(short)3] [10] [i_3] [i_4] [i_4 - 1] [i_6] = ((/* implicit */int) (unsigned char)105);
                        }
                        var_22 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)73)) : ((+(((/* implicit */int) (signed char)94))))));
                        var_23 = ((/* implicit */unsigned char) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (648451610203526623ULL)))));
                    }
                    var_24 = ((/* implicit */unsigned long long int) max((min((arr_11 [i_2 - 1]), (((/* implicit */unsigned short) var_11)))), (((/* implicit */unsigned short) ((((/* implicit */int) var_14)) != (((/* implicit */int) (unsigned short)5535)))))));
                    arr_24 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */int) max((arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [(_Bool)1]), (((/* implicit */unsigned short) var_10))))) % ((((_Bool)1) ? (var_16) : (((/* implicit */int) (short)-4310)))))) < (((/* implicit */int) ((unsigned char) (short)(-32767 - 1))))));
                    var_25 += ((/* implicit */signed char) arr_21 [i_3] [i_3] [i_1] [i_2 + 1] [(_Bool)1] [i_1] [i_1]);
                    var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) 8863751257018399964ULL)) ? (((/* implicit */int) (short)-4321)) : (((/* implicit */int) (short)21693)))))))));
                }
            } 
        } 
        var_27 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) max((1975266741935181720LL), (((/* implicit */long long int) var_17))))) <= (arr_2 [i_1])))) & (((((/* implicit */int) ((unsigned char) 3163495943474527555LL))) * (((/* implicit */int) max(((unsigned short)12960), (arr_9 [i_1]))))))));
    }
}
