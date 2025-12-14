/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7092
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
    var_18 = ((/* implicit */unsigned long long int) (-(((long long int) (_Bool)1))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) 0ULL);
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_20 ^= ((/* implicit */int) var_16);
            var_21 = ((/* implicit */short) (~(((((/* implicit */int) var_12)) * (((/* implicit */int) (_Bool)0))))));
        }
        for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 3) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                var_22 = ((/* implicit */unsigned char) ((short) var_8));
                arr_9 [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(-698482897)))) - (((arr_2 [(_Bool)1]) >> (((((/* implicit */int) (short)20804)) - (20798)))))));
            }
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                var_23 = ((/* implicit */unsigned int) (unsigned char)7);
                arr_13 [i_0 + 2] [i_2] [i_4] = arr_2 [i_0];
            }
            for (long long int i_5 = 2; i_5 < 17; i_5 += 4) 
            {
                /* LoopSeq 2 */
                for (short i_6 = 2; i_6 < 19; i_6 += 4) 
                {
                    var_24 = ((/* implicit */unsigned char) var_11);
                    var_25 *= ((/* implicit */long long int) ((_Bool) -1LL));
                    arr_19 [i_6] [i_2] = ((/* implicit */long long int) var_17);
                }
                for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) var_0))));
                        var_27 = ((/* implicit */short) ((int) arr_7 [i_0] [i_2] [i_2 - 2]));
                    }
                    var_28 = ((/* implicit */int) ((signed char) 9223372036854775807LL));
                }
                var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) (((+(((/* implicit */int) var_8)))) * (((/* implicit */int) arr_7 [i_2] [i_0 + 1] [i_5])))))));
            }
            for (signed char i_9 = 2; i_9 < 16; i_9 += 1) 
            {
                var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)4)) * (((/* implicit */int) (unsigned char)248))));
                /* LoopSeq 3 */
                for (unsigned int i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    var_31 = ((/* implicit */unsigned long long int) ((_Bool) arr_11 [i_9 + 1] [i_9 + 1] [i_2 + 1]));
                    arr_31 [i_9] [i_2] [i_9 + 4] [i_9] [i_10] = ((/* implicit */unsigned int) (~(63050394783186944LL)));
                    arr_32 [i_2] [i_0] [(unsigned short)11] [i_2] = ((/* implicit */signed char) var_0);
                    arr_33 [i_2 + 2] [i_2] [i_0] [i_10] [i_2] [i_0] = ((/* implicit */unsigned long long int) (-(var_4)));
                    var_32 |= ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) (_Bool)1))) < (((/* implicit */int) (unsigned char)0))));
                }
                for (long long int i_11 = 2; i_11 < 17; i_11 += 4) 
                {
                    var_33 = (-(((unsigned long long int) var_10)));
                    arr_36 [i_0 - 2] [i_2] [i_9] [i_2] [i_2] = ((/* implicit */short) arr_8 [i_9 - 2]);
                    arr_37 [i_11] [i_11] [i_2] [i_2] [i_2] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) 3647310177U)) == (63050394783186944LL)));
                    /* LoopSeq 4 */
                    for (signed char i_12 = 1; i_12 < 18; i_12 += 3) 
                    {
                        arr_40 [i_2] [i_12 + 2] [i_0] [i_2] = ((/* implicit */unsigned long long int) (-(68719476735LL)));
                        var_34 = ((/* implicit */unsigned char) (~(2047450176U)));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 1) 
                    {
                        var_35 = ((/* implicit */int) ((2047450195U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)14)))));
                        var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_2 - 2] [i_11 - 2] [i_9 + 4] [i_2 - 2] [i_0 + 2] [i_0]))) < (3012138813U))))));
                    }
                    for (unsigned int i_14 = 0; i_14 < 20; i_14 += 4) 
                    {
                        var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)14)) || (((/* implicit */_Bool) -1331410421)))))));
                        arr_47 [i_2] [i_9 + 3] [i_9 + 3] [6ULL] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_38 [i_2]))) || (((/* implicit */_Bool) ((unsigned short) arr_18 [i_0 + 1] [7ULL] [i_9] [i_11] [i_14] [i_11])))));
                        arr_48 [5] [i_2] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) 18058574367468289660ULL))) && (((/* implicit */_Bool) ((signed char) (unsigned short)65535)))));
                        var_38 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) 1710279492U)))) % ((-(arr_6 [i_0])))));
                    }
                    for (int i_15 = 1; i_15 < 19; i_15 += 3) 
                    {
                        arr_51 [12ULL] [i_11] [i_9] [i_2] [i_11] [i_0] |= ((/* implicit */_Bool) arr_17 [i_0] [i_2 - 2] [i_0] [i_15] [i_2 - 2]);
                        var_39 = ((/* implicit */signed char) ((_Bool) arr_18 [i_0] [i_15] [i_2] [i_15] [i_11] [i_11]));
                    }
                }
                for (unsigned long long int i_16 = 4; i_16 < 18; i_16 += 3) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_17 = 1; i_17 < 17; i_17 += 3) 
                    {
                        var_40 = ((/* implicit */signed char) ((unsigned long long int) arr_27 [i_0 + 1] [i_2] [i_17] [i_16 - 1]));
                        var_41 ^= ((/* implicit */int) ((((/* implicit */int) arr_54 [i_17 + 2])) < ((~(((/* implicit */int) arr_8 [i_0 - 1]))))));
                        var_42 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) (unsigned short)49773)))));
                        var_43 = ((/* implicit */int) (!(arr_43 [(unsigned short)3] [i_16 + 1] [i_16] [i_16] [i_16])));
                        arr_56 [i_9] [i_9] [i_9] [i_2] = arr_35 [i_0 - 2] [i_2 + 2] [i_2 - 1] [i_16 + 1] [i_9 - 2] [i_2];
                    }
                    for (signed char i_18 = 0; i_18 < 20; i_18 += 3) 
                    {
                        var_44 = ((/* implicit */short) (~(((/* implicit */int) (short)-27405))));
                        var_45 = ((/* implicit */int) max((var_45), (((/* implicit */int) var_12))));
                        arr_60 [i_2] [i_9] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-124))) % (1611767531591576220ULL)));
                        var_46 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -251970466))));
                    }
                    var_47 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224))) & (2293450447U))));
                }
                arr_61 [i_9] [1] [i_2] [i_2] = ((/* implicit */_Bool) (((-(((/* implicit */int) var_10)))) * (((/* implicit */int) (signed char)-124))));
                arr_62 [i_2] = ((/* implicit */signed char) (unsigned char)248);
                arr_63 [i_0] [i_0] [i_2] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_11 [i_9 + 1] [i_0 - 2] [i_9 + 1])) | (var_6)));
            }
            var_48 = ((/* implicit */_Bool) 4246276939U);
        }
    }
}
