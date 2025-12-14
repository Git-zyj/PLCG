/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98609
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            var_20 -= ((/* implicit */signed char) min(((unsigned char)23), (((/* implicit */unsigned char) (signed char)-21))));
            var_21 = ((/* implicit */_Bool) -4282080081321818833LL);
            /* LoopNest 2 */
            for (long long int i_2 = 3; i_2 < 22; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    {
                        arr_11 [i_2] [i_1] [i_2] [21LL] = ((/* implicit */unsigned int) max((((/* implicit */short) min((arr_3 [i_1 + 1] [i_1 - 2] [i_1 - 2]), (arr_3 [i_1] [i_1 - 2] [i_1 + 1])))), (((short) arr_9 [i_2] [i_2]))));
                        var_22 = ((/* implicit */signed char) min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) != (679352153U))), (((((/* implicit */int) (unsigned char)208)) == (((/* implicit */int) (unsigned char)0))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                for (unsigned int i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_6 = 1; i_6 < 22; i_6 += 1) 
                        {
                            arr_21 [i_4] [i_1 - 2] [i_4] [i_5] [i_4] &= ((/* implicit */signed char) max((max((((/* implicit */unsigned int) max((((/* implicit */int) (signed char)117)), (arr_4 [i_0] [i_4] [i_5] [i_5])))), (min((((/* implicit */unsigned int) var_16)), (2425187747U))))), (((/* implicit */unsigned int) (signed char)117))));
                            var_23 = ((/* implicit */long long int) ((_Bool) -4356901859761723496LL));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            var_24 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)233))) == (-4356901859761723496LL))))));
                            var_25 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)27))))) < (((/* implicit */int) var_1))))), (((long long int) ((((/* implicit */int) (short)30422)) ^ (((/* implicit */int) (signed char)117)))))));
                        }
                    }
                } 
            } 
            arr_24 [i_0] = ((/* implicit */long long int) arr_7 [i_0] [(short)18] [(unsigned char)6] [i_1]);
        }
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 3) 
        {
            var_26 = ((/* implicit */unsigned char) arr_19 [i_0] [16LL] [i_0] [(signed char)15] [i_0] [i_0] [0U]);
            /* LoopSeq 2 */
            for (unsigned char i_9 = 2; i_9 < 20; i_9 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 23; i_10 += 3) 
                {
                    for (unsigned int i_11 = 0; i_11 < 23; i_11 += 1) 
                    {
                        {
                            var_27 = arr_33 [i_0] [i_8] [15ULL] [i_0] [i_0] [13ULL] [i_9 + 3];
                            var_28 *= ((/* implicit */unsigned char) 679352146U);
                            var_29 *= ((/* implicit */_Bool) ((603291518U) % (1869779539U)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_12 = 2; i_12 < 21; i_12 += 3) 
                {
                    for (unsigned char i_13 = 0; i_13 < 23; i_13 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */long long int) (signed char)-17);
                            var_31 -= ((/* implicit */long long int) ((1327810487U) * (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                        }
                    } 
                } 
            }
            for (long long int i_14 = 0; i_14 < 23; i_14 += 3) 
            {
                arr_44 [(signed char)15] [(signed char)15] [i_14] = ((/* implicit */_Bool) (unsigned char)169);
                var_32 = ((/* implicit */short) ((((/* implicit */int) var_13)) / (((/* implicit */int) (unsigned char)1))));
                var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) (signed char)(-127 - 1)))));
            }
            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) arr_28 [i_8]))));
        }
        for (short i_15 = 0; i_15 < 23; i_15 += 3) 
        {
            var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) (~(((/* implicit */int) min((var_16), ((signed char)0)))))))));
            arr_47 [i_0] [i_15] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)224))) < (((((/* implicit */unsigned int) ((/* implicit */int) (short)-167))) ^ (3525720376U)))));
        }
        /* LoopNest 2 */
        for (unsigned char i_16 = 0; i_16 < 23; i_16 += 1) 
        {
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                {
                    var_36 = ((/* implicit */unsigned long long int) (short)-3270);
                    /* LoopSeq 2 */
                    for (long long int i_18 = 0; i_18 < 23; i_18 += 3) 
                    {
                        var_37 = ((/* implicit */unsigned int) max((var_37), (max((((/* implicit */unsigned int) max((((/* implicit */short) ((unsigned char) (unsigned char)161))), (arr_5 [i_18] [i_17] [i_16] [i_0])))), (max((1438358072U), (((/* implicit */unsigned int) min((((/* implicit */short) arr_16 [i_17] [i_18])), ((short)30422))))))))));
                        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) (short)-21986))));
                    }
                    for (int i_19 = 1; i_19 < 19; i_19 += 2) 
                    {
                        arr_61 [(short)2] [(short)2] [i_16] [i_19] [i_16] [i_0] = ((/* implicit */short) (signed char)127);
                        var_39 = ((/* implicit */long long int) arr_49 [i_0]);
                        var_40 = min((((/* implicit */unsigned int) arr_31 [i_0] [i_0] [(signed char)4] [i_17] [i_19])), (min((((/* implicit */unsigned int) ((arr_27 [i_0] [11LL] [i_17] [i_19]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_0] [i_16] [i_17] [i_17] [i_17] [i_19])))))), (arr_57 [i_16] [i_16]))));
                        arr_62 [i_16] [i_16] = ((/* implicit */_Bool) (short)-1);
                        var_41 = ((/* implicit */signed char) ((min((arr_54 [i_0] [i_0] [i_19 + 4] [i_0]), (((/* implicit */unsigned int) (_Bool)0)))) - (((arr_54 [i_16] [i_16] [i_19 + 1] [i_19]) & (arr_54 [i_0] [i_16] [i_19 + 2] [i_19])))));
                    }
                    arr_63 [i_0] [i_16] [i_17] [(short)11] = ((/* implicit */long long int) 524272);
                    var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) (_Bool)1))));
                }
            } 
        } 
    }
    var_43 &= ((/* implicit */long long int) (signed char)-117);
}
