/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62040
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
    var_18 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
    var_19 = ((/* implicit */long long int) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_20 = ((/* implicit */signed char) var_2);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    {
                        var_21 ^= ((/* implicit */short) (-(var_6)));
                        arr_12 [i_2] [20LL] [i_1] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1]))));
                        arr_13 [i_2] [i_2] = (!(var_9));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            var_22 = ((/* implicit */long long int) (!((_Bool)1)));
            /* LoopNest 3 */
            for (short i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                for (unsigned char i_6 = 2; i_6 < 19; i_6 += 3) 
                {
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        {
                            arr_26 [i_5] [i_0] [18U] [i_0] [i_5] = ((/* implicit */_Bool) ((411578594034655240ULL) & (((/* implicit */unsigned long long int) arr_5 [i_5] [i_6 - 2] [i_7] [i_7]))));
                            arr_27 [i_7] [18U] [i_7] [i_4] &= ((/* implicit */unsigned int) var_0);
                            var_23 = ((/* implicit */signed char) (~(((/* implicit */int) var_7))));
                            var_24 += ((/* implicit */short) ((((/* implicit */int) arr_8 [(unsigned char)10] [i_0 + 2] [i_6 + 2] [i_0 + 2])) >> (((arr_5 [i_0 + 2] [i_0 + 1] [i_6 + 1] [i_6]) - (2356401247U)))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (short i_8 = 0; i_8 < 22; i_8 += 4) 
            {
                var_25 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                /* LoopSeq 2 */
                for (short i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    var_26 *= ((/* implicit */unsigned int) ((var_9) ? (((/* implicit */int) arr_3 [4U] [i_4])) : (((/* implicit */int) arr_3 [i_0] [i_9]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 3; i_10 < 21; i_10 += 3) 
                    {
                        var_27 ^= ((/* implicit */signed char) var_9);
                        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) var_9))));
                        arr_36 [i_9] [i_4] [i_4] [(unsigned char)1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) % (2848445736854247333ULL)));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_11 = 1; i_11 < 20; i_11 += 4) /* same iter space */
                    {
                        var_29 += ((/* implicit */unsigned int) (-(((/* implicit */int) arr_38 [i_0] [i_0 + 2] [i_4] [i_0] [(_Bool)1] [i_0] [(unsigned short)9]))));
                        var_30 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) var_12))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)32745)) : (((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) var_1))))));
                        var_31 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_0))));
                        var_32 += (!(((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 + 1] [i_11 + 1] [i_11 + 1])));
                    }
                    for (long long int i_12 = 1; i_12 < 20; i_12 += 4) /* same iter space */
                    {
                        var_33 = ((/* implicit */signed char) arr_37 [i_0 + 2] [i_4] [i_8] [i_9] [i_12]);
                        var_34 = ((/* implicit */long long int) var_10);
                    }
                }
                for (unsigned char i_13 = 0; i_13 < 22; i_13 += 4) 
                {
                    arr_46 [15ULL] [i_4] [i_4] [i_4] [i_4] = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_7 [i_0 + 1] [i_4] [i_4] [i_0 - 1]));
                    var_35 ^= ((/* implicit */unsigned short) ((arr_20 [(unsigned short)2] [i_4] [i_4] [i_8] [i_13] [i_13]) / (arr_20 [i_0] [i_4] [i_4] [i_4] [19ULL] [i_13])));
                }
            }
        }
        var_36 = ((/* implicit */unsigned short) (((((_Bool)1) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (_Bool)1)))) % (((/* implicit */int) arr_33 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 2] [4ULL] [(unsigned short)5]))));
    }
    for (unsigned int i_14 = 0; i_14 < 23; i_14 += 4) 
    {
        arr_50 [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)169)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55866)))))))));
        var_37 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_14] [i_14])))))) > (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) & (arr_49 [i_14] [i_14])))));
    }
}
