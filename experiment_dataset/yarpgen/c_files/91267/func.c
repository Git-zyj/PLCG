/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91267
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_6))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_20 = ((/* implicit */short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)60)))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_21 = ((/* implicit */unsigned short) ((unsigned long long int) arr_4 [i_0] [i_1]));
            var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_12))));
            arr_8 [i_1] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)1)) / (((/* implicit */int) (_Bool)1))));
        }
        for (unsigned short i_2 = 3; i_2 < 10; i_2 += 4) 
        {
            arr_11 [i_0] [i_2] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned short)9043)) ? (((/* implicit */int) (_Bool)0)) : (1339493660)))));
            var_23 = ((/* implicit */int) arr_0 [i_0]);
            var_24 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 229376U)) ? (((/* implicit */int) (unsigned char)195)) : (((/* implicit */int) (unsigned char)61)))) + ((-(((/* implicit */int) var_7))))))), (((((/* implicit */_Bool) (unsigned char)91)) ? (18014398509416448ULL) : (max((17357240550198433669ULL), (((/* implicit */unsigned long long int) var_9))))))));
        }
        for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            var_25 = ((/* implicit */unsigned short) ((arr_6 [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) (-(min((var_1), (((/* implicit */unsigned int) var_4))))))) : (min(((((_Bool)1) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)234))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1052820422U)))))))));
            var_26 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [i_3])) : (223856658720443197ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), (arr_6 [i_3] [i_0] [(unsigned short)8])))))))));
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_27 *= var_13;
                var_28 = ((/* implicit */unsigned int) arr_13 [(unsigned char)11] [(unsigned char)11]);
                var_29 = ((/* implicit */int) arr_13 [i_4] [i_4]);
                /* LoopSeq 3 */
                for (short i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
                {
                    var_30 = ((/* implicit */unsigned int) var_12);
                    arr_19 [i_0] [i_0] [1ULL] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((unsigned int) 2139095040U))) * (((var_12) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [(_Bool)1] [i_3] [(short)8] [i_3])))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)8001))))) : (min((((unsigned long long int) var_2)), (((/* implicit */unsigned long long int) min((((/* implicit */short) var_0)), (var_17))))))));
                }
                /* vectorizable */
                for (short i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
                {
                    arr_23 [i_0] [i_0] [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)71))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_4] [i_4] [i_4]))) : (var_6)));
                    var_31 = ((/* implicit */unsigned short) var_5);
                    arr_24 [i_6] [i_6] [i_4] = (((+(var_8))) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_0]))))));
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        var_32 = ((/* implicit */_Bool) ((unsigned int) 4126613398U));
                        arr_27 [i_0] [i_3] [7ULL] [i_6] [i_6] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) 3611766086U))));
                        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 536870896)) / (266813199U))))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        var_34 = ((/* implicit */short) (((_Bool)1) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (18222887414989108419ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)50))))))));
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_0] [i_3] [i_3] [i_3] [i_6] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4]))) : (((((/* implicit */_Bool) arr_17 [(short)10] [i_3] [i_4] [i_6] [i_8] [(signed char)8])) ? (var_11) : (((/* implicit */unsigned long long int) var_6))))));
                        arr_32 [i_0] [i_0] [i_0] [i_6] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) 255U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)30462))))));
                        var_36 = ((_Bool) 188369714U);
                    }
                }
                for (short i_9 = 0; i_9 < 12; i_9 += 1) /* same iter space */
                {
                    arr_35 [i_3] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)185))) : (var_9))) / (min((max((((/* implicit */unsigned int) (signed char)-123)), (4190266359U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 19U)) ? (((/* implicit */int) (short)-30475)) : (((/* implicit */int) (short)-7685)))))))));
                    var_37 = ((/* implicit */int) min(((+(var_12))), ((-(0ULL)))));
                    var_38 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) (-(arr_33 [i_4] [i_4] [i_4] [i_4] [i_4])))))))));
                    arr_36 [i_0] [i_3] [i_4] [i_9] = var_9;
                    var_39 = ((/* implicit */short) ((((unsigned int) ((((/* implicit */_Bool) 32766)) ? (((/* implicit */int) (_Bool)0)) : (-200861518)))) | (((/* implicit */unsigned int) min((((int) var_5)), (((/* implicit */int) arr_10 [i_0])))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 12; i_10 += 3) 
        {
            for (unsigned int i_11 = 0; i_11 < 12; i_11 += 2) 
            {
                {
                    var_40 = ((/* implicit */unsigned short) (-(818663198)));
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 12; i_12 += 1) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_41 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_13 [i_0] [i_12])))));
                                var_42 = ((/* implicit */_Bool) min((((3U) - (((/* implicit */unsigned int) -818663199)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_17 [i_0] [i_10] [i_10] [i_12] [i_0] [i_13])))))));
                                var_43 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_3))));
                                var_44 = ((/* implicit */unsigned int) min((var_44), (2237607200U)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned char i_14 = 0; i_14 < 12; i_14 += 2) 
                    {
                        arr_50 [i_0] = ((((/* implicit */_Bool) arr_48 [i_0] [10] [(unsigned short)1] [i_14] [i_14])) ? (((/* implicit */int) arr_40 [(unsigned short)4] [i_14] [i_14])) : (((/* implicit */int) arr_34 [(short)4] [(short)4] [i_0] [i_14])));
                        var_45 = ((/* implicit */short) (+((+(var_12)))));
                        var_46 += ((/* implicit */int) min(((!(((/* implicit */_Bool) arr_4 [i_10] [i_10])))), ((!(((/* implicit */_Bool) (short)-7008))))));
                    }
                    var_47 = ((/* implicit */unsigned char) (((-(arr_25 [i_11] [i_0] [i_10] [i_0] [i_0] [i_0]))) / (((((/* implicit */_Bool) arr_25 [i_11] [i_11] [i_10] [i_11] [i_11] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                }
            } 
        } 
    }
    var_48 = ((/* implicit */int) var_14);
    var_49 -= ((/* implicit */unsigned int) min((min((((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) var_1)))), (var_12)));
}
