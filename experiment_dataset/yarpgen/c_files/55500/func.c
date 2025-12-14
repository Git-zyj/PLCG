/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55500
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
    var_13 = ((/* implicit */unsigned long long int) ((short) ((int) ((unsigned short) var_12))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((short) ((int) var_1));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) ((short) var_5)));
            arr_8 [i_0] [i_0 + 1] [i_1] = ((/* implicit */long long int) ((int) ((int) (short)-6612)));
            var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((unsigned short) ((int) arr_6 [i_1] [(_Bool)1]))))));
            var_15 = ((int) ((_Bool) var_12));
            /* LoopSeq 3 */
            for (unsigned char i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                /* LoopSeq 1 */
                for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((short) ((long long int) 3092391038U))))));
                    arr_16 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) ((_Bool) ((long long int) var_8)));
                    arr_17 [i_0] [i_0] [i_3] [i_0] &= ((/* implicit */unsigned long long int) ((unsigned int) ((short) arr_15 [i_0] [i_1] [i_1] [i_0] [i_0] [i_1])));
                }
                var_17 = ((/* implicit */_Bool) ((int) ((_Bool) arr_3 [i_0] [i_1] [i_2])));
            }
            for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                arr_20 [5U] [2ULL] [i_0] = ((int) ((int) arr_1 [i_1]));
                var_18 = ((/* implicit */unsigned char) ((unsigned int) ((unsigned long long int) 17523051972684523713ULL)));
                /* LoopNest 2 */
                for (short i_5 = 1; i_5 < 17; i_5 += 2) 
                {
                    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */int) ((unsigned int) ((short) (short)14096)));
                            var_20 ^= ((/* implicit */unsigned int) ((unsigned long long int) ((long long int) (short)-6626)));
                            arr_25 [i_0] [i_0] [i_4] [i_4] [i_6] = ((/* implicit */int) ((short) ((int) -2600168195478288859LL)));
                        }
                    } 
                } 
            }
            for (int i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                arr_28 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned short) ((long long int) var_10)));
                /* LoopSeq 4 */
                for (int i_8 = 0; i_8 < 18; i_8 += 2) 
                {
                    /* LoopSeq 3 */
                    for (int i_9 = 0; i_9 < 18; i_9 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned short) ((unsigned int) ((short) arr_19 [i_7] [i_0] [i_9])));
                        arr_35 [i_8] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned char) arr_15 [i_0] [i_8] [i_7] [i_1] [i_0] [i_0])));
                    }
                    for (unsigned long long int i_10 = 1; i_10 < 17; i_10 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned short) ((unsigned char) ((int) arr_26 [i_1])));
                        var_23 = ((/* implicit */int) ((short) ((unsigned long long int) arr_37 [i_0] [i_0] [i_0] [i_0])));
                        var_24 -= ((/* implicit */unsigned int) ((long long int) ((int) var_2)));
                        var_25 = ((/* implicit */int) ((long long int) ((unsigned short) (short)6634)));
                    }
                    for (unsigned long long int i_11 = 1; i_11 < 17; i_11 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */_Bool) ((long long int) ((short) arr_32 [i_0] [i_0] [i_1] [i_7] [12] [i_11] [i_11])));
                        arr_43 [i_0] [i_7] = ((/* implicit */long long int) ((short) ((unsigned long long int) var_12)));
                    }
                    var_27 = ((/* implicit */unsigned char) ((_Bool) ((long long int) arr_42 [i_0] [(_Bool)1] [i_0] [i_0] [i_1] [i_7] [i_8])));
                }
                for (long long int i_12 = 2; i_12 < 17; i_12 += 2) 
                {
                    var_28 = ((/* implicit */long long int) max((var_28), (((long long int) ((unsigned char) 351677050)))));
                    var_29 = ((/* implicit */int) ((_Bool) ((int) 1918586061)));
                    var_30 = ((/* implicit */int) ((short) ((int) arr_0 [i_0])));
                }
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) /* same iter space */
                {
                    arr_51 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((short) ((unsigned int) var_5)));
                    arr_52 [i_0] [i_1] [12LL] = ((/* implicit */int) ((unsigned long long int) ((unsigned long long int) arr_3 [i_0] [i_1] [i_13])));
                }
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned int) ((unsigned long long int) ((short) 17523051972684523709ULL)));
                    var_32 = ((int) ((short) arr_9 [i_0] [i_1] [i_7]));
                    var_33 *= ((/* implicit */unsigned long long int) ((signed char) ((short) arr_3 [(unsigned short)17] [i_1] [i_1])));
                    arr_57 [i_0] [i_1] [(short)11] [i_0] [i_14] = ((/* implicit */signed char) ((unsigned long long int) ((_Bool) arr_18 [i_0] [i_0] [(unsigned short)16] [i_0])));
                    /* LoopSeq 1 */
                    for (short i_15 = 0; i_15 < 18; i_15 += 2) 
                    {
                        var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((unsigned long long int) ((unsigned int) var_2))))));
                        var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((short) ((short) 18U))))));
                    }
                }
                /* LoopSeq 1 */
                for (unsigned char i_16 = 0; i_16 < 18; i_16 += 2) 
                {
                    arr_63 [i_16] |= ((/* implicit */long long int) ((unsigned long long int) ((_Bool) arr_1 [i_0])));
                    var_36 &= ((/* implicit */short) ((int) ((unsigned short) (unsigned char)255)));
                }
                var_37 = ((/* implicit */int) ((long long int) ((short) arr_15 [i_0] [i_0] [i_0] [i_1] [(short)9] [i_0])));
            }
        }
        var_38 &= ((/* implicit */unsigned long long int) ((int) ((unsigned short) var_7)));
    }
    var_39 = ((/* implicit */_Bool) ((short) ((unsigned int) ((signed char) var_2))));
}
