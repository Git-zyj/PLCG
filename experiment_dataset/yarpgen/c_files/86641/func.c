/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86641
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
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) var_16))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_21 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_0 [i_0])))));
        var_22 *= ((/* implicit */short) var_7);
    }
    for (short i_1 = 1; i_1 < 13; i_1 += 1) 
    {
        arr_6 [i_1] [i_1 - 1] = ((/* implicit */int) ((signed char) min((var_2), (((/* implicit */long long int) (-(((/* implicit */int) (short)29092))))))));
        arr_7 [i_1 + 3] = ((/* implicit */int) min(((-(878023264U))), (((/* implicit */unsigned int) (-((-(((/* implicit */int) (short)29113)))))))));
        /* LoopSeq 2 */
        for (long long int i_2 = 1; i_2 < 12; i_2 += 1) 
        {
            var_23 ^= ((/* implicit */_Bool) var_15);
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                for (long long int i_4 = 1; i_4 < 14; i_4 += 3) 
                {
                    {
                        arr_18 [i_3] [i_2] [11ULL] [13ULL] [(short)9] = ((/* implicit */short) (unsigned char)220);
                        arr_19 [i_1] [i_2] [i_2] [i_3] [i_4 + 1] [i_3] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((arr_12 [i_3]), (arr_5 [i_1 - 1])))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((short) arr_14 [i_2] [i_4]))))), (((/* implicit */int) ((unsigned short) (unsigned short)30191)))));
                    }
                } 
            } 
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_1] [i_2] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)47))))) : ((+(max((((/* implicit */unsigned long long int) (signed char)48)), (15199960782741371906ULL)))))));
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            arr_22 [i_5] = ((/* implicit */unsigned short) ((unsigned long long int) arr_13 [i_1 + 2]));
            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (_Bool)1))));
            var_26 |= ((/* implicit */unsigned char) var_9);
            /* LoopNest 2 */
            for (unsigned short i_6 = 2; i_6 < 13; i_6 += 3) 
            {
                for (int i_7 = 3; i_7 < 14; i_7 += 3) 
                {
                    {
                        var_27 += ((/* implicit */unsigned long long int) ((int) (~((-9223372036854775807LL - 1LL)))));
                        var_28 |= ((/* implicit */int) (-(var_15)));
                        /* LoopSeq 2 */
                        for (long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) (-((((_Bool)1) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (var_11))))))));
                            arr_29 [i_1] [i_5] [(_Bool)1] [4ULL] [i_8] = ((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32755)));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_33 [i_1] [i_5] [i_1] = ((/* implicit */unsigned short) -136379217);
                            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) arr_4 [i_1]))));
                            arr_34 [i_9] [(short)0] [6U] |= ((/* implicit */short) (signed char)27);
                            arr_35 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) + (((/* implicit */int) ((short) -2747751620204417259LL)))));
                        }
                    }
                } 
            } 
        }
    }
}
