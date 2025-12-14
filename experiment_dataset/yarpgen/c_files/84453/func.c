/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84453
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (long long int i_3 = 4; i_3 < 17; i_3 += 3) 
                {
                    {
                        arr_13 [(signed char)12] [i_1] [i_1] [i_3 - 4] = ((/* implicit */unsigned long long int) (((+(var_13))) < (((/* implicit */long long int) var_10))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 3; i_4 < 15; i_4 += 2) 
                        {
                            arr_16 [i_0] [(signed char)6] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) min((((((/* implicit */int) var_6)) / (((/* implicit */int) var_8)))), (((/* implicit */int) var_6))));
                            arr_17 [i_0] [i_0] [6LL] [i_2] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) arr_12 [i_4 - 2] [i_4 + 2] [i_3 - 1] [i_3]));
                        }
                        var_15 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_3 - 3])) ^ (var_2)));
                    }
                } 
            } 
            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) min((min((((/* implicit */unsigned short) (short)-14796)), ((unsigned short)56099))), (((/* implicit */unsigned short) ((var_11) < (((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))))))))));
            var_17 *= ((/* implicit */int) ((((((/* implicit */_Bool) (~(((/* implicit */int) (short)-14771))))) || (((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_0)))) : (min((((/* implicit */unsigned int) (+(((/* implicit */int) (short)25592))))), (((var_4) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0])))))))));
        }
        /* vectorizable */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)48)))))));
            var_19 = ((/* implicit */unsigned char) arr_14 [i_0] [i_5 - 1] [i_5] [(signed char)10] [i_5 - 1]);
        }
        for (unsigned int i_6 = 1; i_6 < 15; i_6 += 3) 
        {
            arr_24 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((min((arr_18 [i_6 + 1] [i_0]), (((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_1))))), (((/* implicit */unsigned long long int) (unsigned char)64))));
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 3; i_7 < 16; i_7 += 4) 
            {
                for (int i_8 = 2; i_8 < 15; i_8 += 2) 
                {
                    {
                        arr_31 [i_8] [(short)7] [i_7] [i_6] [i_6] [i_0] = ((/* implicit */unsigned char) ((unsigned short) var_1));
                        arr_32 [i_8] = ((/* implicit */long long int) (unsigned char)127);
                        arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((var_11) > (((/* implicit */int) (unsigned char)40))));
                    }
                } 
            } 
        }
        arr_34 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) != (((/* implicit */unsigned long long int) var_10)))))) != (((3141462935085172221ULL) >> ((((+(((/* implicit */int) var_8)))) + (25892)))))));
        arr_35 [i_0] [i_0] = ((/* implicit */signed char) var_4);
        var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 838936781)) : (arr_19 [(unsigned char)14])))))));
    }
    for (long long int i_9 = 0; i_9 < 11; i_9 += 3) 
    {
        arr_39 [i_9] = ((/* implicit */unsigned short) min((((/* implicit */int) var_12)), (min((((/* implicit */int) min((arr_9 [i_9] [i_9] [i_9]), (((/* implicit */short) var_0))))), (var_9)))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) min((arr_6 [i_9] [5ULL]), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)65529)) <= (((/* implicit */int) (short)-10974))))) : ((-(var_9)))))))))));
        arr_40 [i_9] = ((/* implicit */long long int) (((+(9ULL))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) | (arr_38 [i_9])))));
        var_22 *= ((/* implicit */signed char) var_11);
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_11 = 0; i_11 < 20; i_11 += 4) 
        {
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((((/* implicit */int) var_14)) != (((/* implicit */int) var_14))))) : (((var_9) << (((var_1) - (6101014818239931348ULL))))))), (min((((((/* implicit */int) arr_43 [i_11] [i_10] [i_10])) << (((var_4) - (926478576U))))), (((/* implicit */int) arr_45 [i_10])))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
            {
                arr_48 [i_10] = ((/* implicit */unsigned short) arr_41 [i_11] [i_12]);
                arr_49 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */short) var_4);
                var_24 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_42 [i_12])) + (((/* implicit */int) ((-2668247129226022985LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)148))))))));
                arr_50 [i_10] [i_10] [i_12] [i_12] = arr_47 [i_11] [i_11] [i_11] [i_11];
            }
            /* vectorizable */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
            {
                var_25 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_11]))) : (var_1))));
                arr_54 [i_10] [i_11] [i_10] [i_11] = ((/* implicit */unsigned int) (+(1974830794)));
                arr_55 [i_10] = ((((/* implicit */int) (signed char)127)) >> (((1205635188) - (1205635165))));
                var_26 = ((/* implicit */unsigned char) ((var_4) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((short) -4094200185841955035LL))))));
            }
        }
        arr_56 [i_10] = ((/* implicit */long long int) arr_53 [i_10] [i_10] [i_10] [i_10]);
    }
    var_27 = ((/* implicit */unsigned char) (unsigned short)10369);
}
