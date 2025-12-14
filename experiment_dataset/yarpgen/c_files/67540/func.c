/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67540
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
    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(max((-2147483645), (((/* implicit */int) (short)-10344)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) (+(min((arr_4 [i_0] [i_0] [i_0 - 3]), (arr_4 [i_0 + 4] [i_0] [i_0 + 1])))));
                var_15 = ((/* implicit */int) var_2);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 2; i_3 < 10; i_3 += 2) 
        {
            arr_10 [i_3] &= ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) -2147483637))) ^ (((/* implicit */int) (signed char)90))));
            var_17 += ((/* implicit */signed char) arr_4 [i_2 + 1] [i_3] [i_2 + 1]);
            arr_11 [i_3 + 1] [i_2] [i_2] = ((/* implicit */long long int) ((signed char) var_2));
            arr_12 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483644)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_12) && (((/* implicit */_Bool) (signed char)127)))))) : (2611894210U)));
        }
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3396099312186352033LL)) ? (arr_5 [i_2 + 1]) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
        arr_13 [i_2] = ((/* implicit */int) ((unsigned char) arr_2 [i_2 + 1]));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_19 = ((/* implicit */int) var_8);
        var_20 = ((/* implicit */long long int) ((((arr_5 [i_4]) == (arr_5 [i_4]))) ? (((var_12) ? (arr_5 [i_4]) : (arr_5 [i_4]))) : (((/* implicit */unsigned long long int) min((((int) 2047U)), (min((((/* implicit */int) var_10)), (-2027905425))))))));
        /* LoopNest 3 */
        for (long long int i_5 = 4; i_5 < 14; i_5 += 4) 
        {
            for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) 
            {
                for (signed char i_7 = 3; i_7 < 13; i_7 += 3) 
                {
                    {
                        var_21 = ((/* implicit */short) (+(((/* implicit */int) (signed char)127))));
                        var_22 = ((/* implicit */signed char) ((int) max((((/* implicit */long long int) ((((/* implicit */int) (short)192)) << (((var_6) - (8822981358906946442ULL)))))), (72057594037862400LL))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned char) min((((/* implicit */int) var_2)), ((+(((/* implicit */int) var_4))))));
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_9 = 1; i_9 < 13; i_9 += 4) 
        {
            for (unsigned long long int i_10 = 1; i_10 < 11; i_10 += 4) 
            {
                {
                    arr_35 [(unsigned short)5] [i_9] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_9 + 1] [i_9] [i_10])) ? (((/* implicit */long long int) arr_31 [i_9 + 1] [i_8] [i_10])) : (72057594037862400LL)));
                    var_24 = ((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) var_2)))));
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 15; i_11 += 2) 
                    {
                        for (short i_12 = 0; i_12 < 15; i_12 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) 2147483645))) ? (arr_30 [i_9 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_9 + 2]))))))));
                                arr_41 [2ULL] [i_9] [(unsigned short)10] [(unsigned char)11] [i_11] [i_11] [i_12] = ((int) var_4);
                                var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_9 - 1] [i_11])) ? (((/* implicit */int) arr_0 [i_10 - 1] [i_8])) : (((/* implicit */int) var_10))));
                                var_27 = ((/* implicit */unsigned long long int) (signed char)-46);
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned char) arr_0 [i_8] [i_8]);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            arr_44 [i_13] = ((/* implicit */long long int) ((unsigned long long int) arr_2 [i_8]));
            var_29 = ((/* implicit */int) arr_20 [i_8]);
        }
        for (signed char i_14 = 0; i_14 < 15; i_14 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_16 = 2; i_16 < 14; i_16 += 1) 
                {
                    for (int i_17 = 2; i_17 < 14; i_17 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned long long int) arr_17 [i_8]);
                            arr_57 [(signed char)5] [(signed char)5] [i_14] [i_15] [14LL] [4U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_16 - 1] [i_16 + 1])) ? (arr_56 [i_17 - 2] [i_17 + 1] [i_17] [i_17 - 1] [i_17 - 1] [i_17] [i_15]) : (arr_27 [i_15] [i_17 - 1] [i_15])));
                            var_31 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)121))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_18 = 0; i_18 < 15; i_18 += 1) 
                {
                    for (long long int i_19 = 0; i_19 < 15; i_19 += 1) 
                    {
                        {
                            arr_63 [i_8] [i_8] [i_14] [i_8] [i_15] [i_8] [i_19] = ((/* implicit */long long int) (~(((/* implicit */int) var_2))));
                            var_32 = ((/* implicit */int) arr_5 [i_8]);
                            var_33 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 72057594037862380LL)) ? (((/* implicit */unsigned long long int) 9223372036854775799LL)) : (0ULL)))));
                            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_8] [i_15] [i_8]))) / (arr_62 [i_8])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_20 = 0; i_20 < 15; i_20 += 3) 
                {
                    for (unsigned char i_21 = 0; i_21 < 15; i_21 += 4) 
                    {
                        {
                            arr_69 [i_8] [i_15] = ((/* implicit */long long int) arr_19 [i_14] [6U] [6U]);
                            var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) arr_18 [i_8] [i_14] [i_21]))));
                            var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)92)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2817078437736007551ULL)));
                        }
                    } 
                } 
                arr_70 [i_15] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_28 [i_8]))))) <= (arr_25 [i_8] [14LL] [i_15] [i_8])));
            }
            for (unsigned char i_22 = 3; i_22 < 13; i_22 += 3) 
            {
                var_37 = ((/* implicit */unsigned long long int) 2147483645);
                var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_48 [i_8] [i_22 + 1] [i_8])) || ((_Bool)0)));
                var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_22])) ? (3428869331729411455LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) arr_23 [i_8] [i_22 + 1] [i_22 - 2] [i_22 - 2])) : (((/* implicit */int) var_5))));
                var_40 = ((/* implicit */signed char) (~(arr_72 [i_14] [(_Bool)1] [i_22 + 1] [i_14])));
                arr_75 [i_8] [i_14] [i_22 - 1] [i_22] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_8] [i_14] [i_22 - 2]))));
            }
            var_41 = ((/* implicit */short) var_6);
        }
        arr_76 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_40 [i_8] [i_8] [i_8] [i_8])) ? ((~(((/* implicit */int) (unsigned char)2)))) : (((/* implicit */int) arr_16 [i_8]))));
        arr_77 [i_8] = (~(-1135458104191378789LL));
        var_42 = ((/* implicit */unsigned int) (~(1045988496233778593LL)));
    }
}
