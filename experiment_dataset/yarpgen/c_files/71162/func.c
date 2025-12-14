/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71162
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
    var_10 = max((min((var_6), (((/* implicit */unsigned short) ((unsigned char) var_3))))), (var_0));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = max((((/* implicit */long long int) ((((/* implicit */long long int) ((arr_1 [i_0]) & (((/* implicit */int) var_0))))) <= (((((/* implicit */_Bool) (unsigned char)110)) ? (((/* implicit */long long int) arr_1 [i_0])) : ((-9223372036854775807LL - 1LL))))))), (-1958419704334674759LL));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_11 += ((/* implicit */signed char) var_9);
            var_12 ^= ((/* implicit */unsigned int) arr_5 [i_0]);
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_2)) : (2305843008676823040LL))))));
                arr_10 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((long long int) (~(((/* implicit */int) arr_0 [i_2])))));
                /* LoopSeq 1 */
                for (unsigned char i_3 = 2; i_3 < 9; i_3 += 1) 
                {
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_8 [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1])) >= (var_8)));
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_8 [i_0] [i_0] [i_3] [i_3])) <= (2305843008676823040LL)));
                    var_16 = ((/* implicit */unsigned char) -2305843008676823040LL);
                }
            }
            /* vectorizable */
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                var_17 = ((/* implicit */_Bool) ((unsigned long long int) ((var_3) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_6))))));
                var_18 = ((/* implicit */signed char) ((long long int) arr_9 [i_0]));
                arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) 2305843008676823039LL));
                arr_18 [i_0] [i_1] [i_4] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_1 [i_0])))) ? (-2305843008676823027LL) : (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_4])) % (((/* implicit */int) (unsigned char)10)))))));
                arr_19 [i_0] [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */int) var_6)) % (((/* implicit */int) (signed char)114))))));
            }
            for (short i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)21953))) ? (((/* implicit */long long int) var_7)) : (((long long int) var_0))));
                var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
            }
        }
        /* LoopSeq 3 */
        for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_7 = 1; i_7 < 9; i_7 += 2) 
            {
                var_21 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) & (max((2305843008676823040LL), (((/* implicit */long long int) ((_Bool) 2305843008676823040LL)))))));
                var_22 = ((/* implicit */short) min(((+(((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (arr_8 [i_0] [i_0] [i_0] [i_7]))))), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0] [i_6])))))))));
            }
            var_23 = (_Bool)1;
            arr_26 [i_0] [i_6] [5] = ((/* implicit */unsigned char) (_Bool)0);
        }
        for (long long int i_8 = 0; i_8 < 10; i_8 += 1) 
        {
            var_24 *= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_15 [i_0] [i_0] [(unsigned short)2] [i_0])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_2)) : (var_8))) : ((+(-2305843008676823040LL))))), (((((/* implicit */long long int) ((int) 6600501166179018888LL))) ^ (arr_9 [i_8])))));
            var_25 = ((/* implicit */unsigned int) (!(((_Bool) ((var_5) % (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
        }
        for (short i_9 = 3; i_9 < 9; i_9 += 2) 
        {
            var_26 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)2))))), (max((arr_27 [i_9 - 1] [(unsigned short)8]), (arr_27 [i_9 - 1] [(signed char)4])))));
            arr_31 [i_0] [i_0] = ((/* implicit */_Bool) (-(max((((/* implicit */long long int) arr_16 [i_0] [i_0] [i_0])), (-2305843008676823044LL)))));
            var_27 *= ((short) max((arr_4 [i_9] [i_9 - 3]), (-4133530081703571342LL)));
            var_28 &= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)115)) ^ (((/* implicit */int) (unsigned char)65))));
        }
        arr_32 [i_0] = ((/* implicit */short) var_3);
    }
    for (unsigned int i_10 = 0; i_10 < 15; i_10 += 2) 
    {
        arr_36 [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) (unsigned short)23444))) <= (max((-2305843008676823040LL), (((/* implicit */long long int) (unsigned short)20702)))))))) : (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_10]))) : (arr_35 [i_10]))), (((((/* implicit */long long int) ((/* implicit */int) arr_34 [i_10]))) ^ (8778913153024LL)))))));
        var_29 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_33 [i_10])))) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_34 [i_10])))) : (((((/* implicit */int) ((unsigned short) var_7))) & (((/* implicit */int) (unsigned short)64101))))));
        arr_37 [i_10] = arr_33 [0U];
        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) arr_34 [i_10]))));
        var_31 *= (+(((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) arr_34 [i_10])) < (var_9)))), ((short)32767)))));
    }
    for (unsigned int i_11 = 0; i_11 < 18; i_11 += 1) 
    {
        var_32 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)178)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_40 [(unsigned char)4]), (arr_40 [(unsigned short)14]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_9)))) & (arr_39 [(signed char)4])))));
        var_33 += ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_38 [i_11] [i_11])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (2436770832U))) : (((/* implicit */unsigned int) ((int) arr_38 [i_11] [i_11])))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2436770832U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [0]))) : (var_1)))), (((((/* implicit */_Bool) arr_38 [i_11] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (0ULL)))))));
        var_34 = ((/* implicit */unsigned char) ((min((arr_38 [i_11] [i_11]), (arr_39 [i_11]))) > (((arr_39 [i_11]) ^ (arr_38 [i_11] [i_11])))));
    }
    var_35 -= ((/* implicit */short) max((var_3), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_3)))) >= (var_2))))));
}
