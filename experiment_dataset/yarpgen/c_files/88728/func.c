/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88728
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_19 = ((/* implicit */signed char) ((int) ((int) 356148120)));
        /* LoopNest 2 */
        for (signed char i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((int) -1LL)) > (var_6))))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) -8LL);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_8)))));
                                var_22 = ((/* implicit */short) (+(((((/* implicit */int) arr_0 [i_2])) - (((/* implicit */int) (signed char)101))))));
                                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-15LL)));
                            }
                        } 
                    } 
                    var_24 = (short)15390;
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 10; i_5 += 3) /* same iter space */
    {
        arr_17 [i_5] = ((/* implicit */short) 1464973804);
        var_25 = ((/* implicit */signed char) 1048575);
        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) var_12))));
        arr_18 [i_5] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)216)) == (((/* implicit */int) arr_16 [i_5])))))) >= (var_7)));
    }
    /* vectorizable */
    for (int i_6 = 3; i_6 < 10; i_6 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_7 = 0; i_7 < 13; i_7 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
            {
                var_27 -= ((/* implicit */unsigned int) (short)-18232);
                var_28 |= ((/* implicit */int) (unsigned char)93);
                var_29 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((unsigned char) 954125047))) : (((int) (short)30845))));
            }
            for (unsigned char i_9 = 0; i_9 < 13; i_9 += 2) /* same iter space */
            {
                var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_14 [i_6] [i_6 + 2]))));
                /* LoopSeq 4 */
                for (long long int i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    var_31 = ((/* implicit */short) arr_12 [i_6] [i_6] [i_6] [i_6 - 1] [i_9] [i_6]);
                    arr_33 [i_6] [i_7] [i_9] [i_6] = ((/* implicit */short) (!(((((/* implicit */int) (short)-31175)) < (((/* implicit */int) (unsigned char)186))))));
                    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 3112775472410579459LL))))))))));
                    var_33 -= ((/* implicit */signed char) (((+(((/* implicit */int) (short)-2048)))) >= (((((/* implicit */int) var_0)) % (((/* implicit */int) (signed char)-90))))));
                }
                for (short i_11 = 0; i_11 < 13; i_11 += 2) /* same iter space */
                {
                    var_34 = ((/* implicit */unsigned char) (signed char)-103);
                    var_35 = 939524096;
                }
                for (short i_12 = 0; i_12 < 13; i_12 += 2) /* same iter space */
                {
                    arr_38 [i_6] [i_7] [i_6] [i_6] = var_17;
                    var_36 = ((/* implicit */unsigned char) ((signed char) ((unsigned char) (short)18232)));
                    var_37 *= ((/* implicit */signed char) 0LL);
                }
                for (short i_13 = 0; i_13 < 13; i_13 += 2) /* same iter space */
                {
                    var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) var_1))));
                    var_39 = ((short) 0);
                }
                var_40 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_5) << (((((/* implicit */int) arr_16 [i_7])) - (30901))))))));
            }
            arr_41 [i_6] [i_6] [i_6] = ((/* implicit */short) ((int) arr_19 [i_6]));
        }
        var_41 = ((/* implicit */int) ((((long long int) var_4)) <= (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)70)) >> (((((/* implicit */int) (signed char)102)) - (83))))))));
    }
    var_42 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) min((var_12), (var_16))))) ? (-666821595) : (1782688170)));
}
