/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56031
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
    var_16 = ((/* implicit */unsigned long long int) 717131266U);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            arr_5 [i_1] [i_0] [i_0] &= ((/* implicit */long long int) ((((min((var_10), (((/* implicit */unsigned long long int) var_7)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)65))))) > (((/* implicit */unsigned long long int) 4235633658U))));
            var_17 = (+((~(min((((/* implicit */int) var_7)), (arr_2 [i_0] [i_0]))))));
            arr_6 [i_0] = ((/* implicit */long long int) (+(3577836029U)));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                var_18 = ((/* implicit */unsigned long long int) 823618138U);
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    var_19 = ((/* implicit */unsigned char) var_12);
                    var_20 |= ((/* implicit */int) ((((((/* implicit */_Bool) 6431118177258483566ULL)) && (((/* implicit */_Bool) (unsigned char)65)))) && (((((/* implicit */_Bool) arr_3 [i_3] [i_3])) || (((/* implicit */_Bool) var_7))))));
                }
                /* LoopSeq 3 */
                for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 2) 
                {
                    var_21 |= var_0;
                    var_22 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_10 [i_0] [i_0] [i_2] [i_4] [i_0])), (var_9)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : ((((+(2741549020728623092ULL))) >> (((((406656458U) | (var_2))) - (4206729171U)))))));
                    var_23 -= min((((/* implicit */unsigned long long int) ((unsigned int) ((0ULL) != (((/* implicit */unsigned long long int) -65622267)))))), (var_10));
                }
                for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    var_24 *= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) & (min((((/* implicit */unsigned long long int) 65622277)), (arr_7 [i_0] [0] [i_5] [i_5]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_5] [i_2] [i_5] [i_5])) || (((/* implicit */_Bool) var_6))))))));
                    arr_18 [i_5] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) 3577836029U)))))))) & (var_8)));
                }
                for (int i_6 = 4; i_6 < 17; i_6 += 1) 
                {
                    var_25 = ((/* implicit */signed char) ((717131266U) * (((((/* implicit */_Bool) arr_16 [i_6] [i_6 - 4] [i_6 - 4] [i_6 + 1] [i_6 - 2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_4) < (717131261U))))) : (var_2)))));
                    var_26 = ((((/* implicit */_Bool) ((263275242U) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_2))))))))) ? (((18446744073709551615ULL) & (((18446744073709551590ULL) + (arr_17 [i_6] [i_2] [i_1] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_6 + 1] [i_6 - 1] [(unsigned char)0] [i_6 - 3])) % (65622266)))));
                    var_27 = (-((~(((arr_17 [i_0] [i_0] [i_0] [i_0]) % (var_15))))));
                }
                var_28 = ((/* implicit */long long int) var_1);
            }
        }
        for (long long int i_7 = 2; i_7 < 17; i_7 += 1) 
        {
            var_29 = ((/* implicit */signed char) 0U);
            /* LoopNest 2 */
            for (long long int i_8 = 1; i_8 < 17; i_8 += 4) 
            {
                for (int i_9 = 3; i_9 < 15; i_9 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((long long int) ((arr_14 [i_9] [17ULL] [i_8] [i_9 + 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                            var_31 = ((/* implicit */unsigned int) max((var_31), (min(((~(min((arr_26 [i_0]), (((/* implicit */unsigned int) (signed char)36)))))), (((/* implicit */unsigned int) var_1))))));
                            var_32 = var_15;
                            var_33 = ((min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) >> (((-65622245) + (65622255)))))), (var_6))) | ((~(min((3ULL), (((/* implicit */unsigned long long int) var_4)))))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 3) 
                        {
                            var_34 = ((/* implicit */unsigned long long int) (((+(arr_26 [i_0]))) % (((/* implicit */unsigned int) min((((((/* implicit */int) var_7)) << (((arr_21 [i_0] [i_7] [i_0]) - (10369355937339719670ULL))))), (((/* implicit */int) arr_20 [i_0] [i_7] [i_0] [i_9 - 2])))))));
                            var_35 &= ((/* implicit */long long int) ((arr_30 [i_8 + 1] [i_8 + 1]) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) ((signed char) 2199023255551LL)))))))));
                            var_36 += max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)255))))), (((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (11734294294598918616ULL) : (var_13)))));
                        }
                        var_37 = ((/* implicit */unsigned long long int) (unsigned char)77);
                        var_38 |= ((((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_0] [i_7] [i_8] [i_7] [i_0])) && (((/* implicit */_Bool) var_1))))) >> (((((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned long long int) 717131244U)), (arr_0 [i_8] [i_9]))))) - (44))));
                        var_39 -= ((/* implicit */unsigned char) (-(((int) arr_3 [10ULL] [i_9]))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 1; i_12 < 16; i_12 += 4) 
            {
                for (unsigned long long int i_13 = 3; i_13 < 16; i_13 += 4) 
                {
                    {
                        arr_40 [i_0] [i_0] = ((((/* implicit */_Bool) max((((/* implicit */long long int) ((717131266U) << (((arr_37 [i_0] [i_7] [12ULL]) - (1578724512U)))))), (((((/* implicit */long long int) 3369967392U)) - (arr_38 [i_13] [i_12 + 2] [i_7 - 1] [i_7] [14U])))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 14802522595086171432ULL))))) - (((/* implicit */int) (signed char)-39))))) : (max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)44))) * (arr_30 [i_0] [i_7]))), (((((/* implicit */_Bool) arr_0 [i_0] [i_7])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0]))))))));
                        var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) max(((((~(var_0))) - (((/* implicit */unsigned long long int) arr_13 [i_7 - 1] [0LL])))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-71)) / (((/* implicit */int) var_7)))) >> (((arr_7 [i_0] [i_0] [16ULL] [i_13 - 2]) - (2630234987303724885ULL)))))))))));
                        var_41 = ((/* implicit */unsigned int) ((unsigned char) (+(arr_38 [i_0] [i_12 - 1] [i_12] [i_12 - 1] [i_12]))));
                        arr_41 [i_0] [i_7] [i_12] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1463215562)) * (1067194020665042385ULL))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_14 = 2; i_14 < 17; i_14 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_15 = 0; i_15 < 18; i_15 += 1) 
            {
                var_42 = ((/* implicit */unsigned long long int) arr_30 [i_0] [i_0]);
                var_43 = var_7;
            }
            var_44 = ((/* implicit */unsigned long long int) min((((long long int) (-2147483647 - 1))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */unsigned long long int) arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
        }
        var_45 = ((/* implicit */unsigned long long int) ((arr_32 [i_0] [i_0] [i_0] [i_0] [i_0]) ^ (((min((((/* implicit */long long int) arr_23 [i_0])), (3061050312678120939LL))) & (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_2 [i_0] [i_0])), (arr_37 [i_0] [i_0] [i_0]))))))));
        var_46 = ((/* implicit */signed char) (~(1494761326U)));
    }
    for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 1) 
    {
        var_47 = ((/* implicit */int) max((var_47), (((/* implicit */int) (((~(var_15))) == (((/* implicit */unsigned long long int) 2533750102U)))))));
        /* LoopSeq 2 */
        for (long long int i_17 = 1; i_17 < 13; i_17 += 2) 
        {
            arr_53 [i_17] = (((+(arr_25 [i_17] [i_17 - 1] [i_17 + 1]))) << (((/* implicit */int) ((((((/* implicit */int) arr_15 [i_16] [i_17] [i_16] [i_16] [i_17])) <= (1269662297))) && (((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) var_7)))))))));
            arr_54 [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) 1374541538U))) || (((/* implicit */_Bool) (~(3577836029U))))));
            arr_55 [i_16] [9LL] [i_17] = ((/* implicit */unsigned long long int) var_3);
        }
        for (unsigned int i_18 = 0; i_18 < 14; i_18 += 4) 
        {
            arr_58 [i_16] [i_16] [i_16] = ((/* implicit */long long int) arr_45 [i_16] [i_16] [1LL]);
            var_48 = ((/* implicit */long long int) ((max((((/* implicit */long long int) var_14)), (var_9))) < (((long long int) max((((/* implicit */unsigned long long int) arr_33 [i_18] [i_18] [i_16] [i_18] [i_16])), (arr_19 [i_18] [i_16] [i_18]))))));
        }
        var_49 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_13)) ? (arr_48 [i_16] [i_16]) : (((/* implicit */unsigned long long int) var_9)))) - (((/* implicit */unsigned long long int) (~(arr_38 [i_16] [i_16] [i_16] [i_16] [i_16]))))));
        /* LoopNest 2 */
        for (unsigned int i_19 = 0; i_19 < 14; i_19 += 3) 
        {
            for (long long int i_20 = 1; i_20 < 11; i_20 += 3) 
            {
                {
                    var_50 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((16356498358161540490ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_20 + 3] [i_20] [i_20] [i_19])))))) ^ (((((/* implicit */int) arr_11 [i_20 + 2] [i_20 + 1] [6U] [i_20 - 1] [i_20] [i_20 + 3])) ^ (((/* implicit */int) arr_11 [i_20] [i_20 + 1] [(signed char)8] [i_20] [i_20] [i_20 - 1]))))));
                    arr_64 [i_19] = ((/* implicit */unsigned long long int) var_1);
                    var_51 = arr_31 [15U] [i_19] [i_19] [i_19] [i_19];
                }
            } 
        } 
        var_52 = ((/* implicit */int) var_3);
    }
}
