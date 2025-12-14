/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65773
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_0 [i_0] [i_0])) + (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)26150)))))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_1 [(_Bool)1]))) % (-7244902672913293276LL)))));
        arr_3 [i_0] = ((/* implicit */unsigned char) max(((-(((/* implicit */int) (unsigned short)26150)))), ((+(min((15), (((/* implicit */int) arr_1 [i_0]))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)37075)) : (((/* implicit */int) (unsigned short)42911)))) > (((/* implicit */int) max((arr_1 [i_2]), (arr_1 [i_1 + 4]))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 15; i_3 += 1) /* same iter space */
                    {
                        var_12 *= ((/* implicit */signed char) var_1);
                        var_13 = ((/* implicit */unsigned char) var_3);
                        var_14 = ((/* implicit */unsigned short) ((var_10) ? (max((arr_5 [i_1 + 1] [i_0]), (arr_5 [i_2] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)-32762))))));
                    }
                    for (unsigned long long int i_4 = 3; i_4 < 15; i_4 += 1) /* same iter space */
                    {
                        var_15 = ((/* implicit */unsigned short) arr_8 [i_0]);
                        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned char)136)))) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) arr_4 [i_0])) >> (((((/* implicit */int) var_8)) + (14241))))))))));
                        var_17 *= var_1;
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 13; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) arr_6 [i_1 + 1] [i_2] [i_2] [i_6])))) ? (((8898254614746960877ULL) << (((arr_8 [i_0]) - (7915977541985862748LL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22624))))) << (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)83))) / (arr_18 [i_0] [i_1])))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned char)83)) : (((/* implicit */int) (unsigned char)173))))) ? (var_7) : (((/* implicit */long long int) var_1)))) : (var_11)));
                                var_20 = (-((-(((/* implicit */int) (unsigned short)42912)))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_1] [i_2] [i_2])) && (((/* implicit */_Bool) arr_10 [i_0] [i_1 + 1] [i_2])))), (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_1 + 1] [i_1] [(unsigned short)1] [i_2])) || (((/* implicit */_Bool) var_1))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 16; i_7 += 2) 
        {
            for (unsigned short i_8 = 0; i_8 < 16; i_8 += 2) 
            {
                {
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((var_3), (((/* implicit */unsigned long long int) (unsigned short)39407)))), (((/* implicit */unsigned long long int) (unsigned short)42902))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)162)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_7] [(unsigned char)2] [i_8])) : (var_4)))), (((((/* implicit */_Bool) var_8)) ? (arr_8 [i_7]) : (((/* implicit */long long int) arr_0 [(unsigned short)1] [i_8])))))) : (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */unsigned int) arr_23 [i_7] [i_0])) != (var_1)))), (var_2))))));
                    arr_31 [i_0] [i_7] [i_8] &= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (signed char)41)))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : ((+(arr_7 [i_8] [i_7] [i_0])))));
                    arr_32 [i_0] [i_0] [i_8] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_8] [i_8] [i_7] [i_0]))))) >> (((/* implicit */int) ((arr_26 [i_0]) > (((/* implicit */long long int) (+(((/* implicit */int) var_8))))))))));
                    var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-45)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-56))) : (var_1)))) : (((((((/* implicit */_Bool) arr_7 [i_0] [i_7] [i_7])) && (((/* implicit */_Bool) (unsigned char)213)))) ? (((((/* implicit */_Bool) -3718341107930251204LL)) ? (-8678111406295379492LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22614))))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0])))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 16; i_9 += 4) 
        {
            for (long long int i_10 = 1; i_10 < 15; i_10 += 3) 
            {
                {
                    var_24 = ((((long long int) ((((/* implicit */_Bool) var_1)) ? (arr_22 [i_10] [i_10 + 1] [i_9] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) (short)32761))))) + (((/* implicit */long long int) ((((/* implicit */int) min(((unsigned short)18712), ((unsigned short)42886)))) * (((/* implicit */int) (signed char)17))))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 16; i_11 += 1) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 16; i_12 += 2) 
                        {
                            {
                                arr_44 [i_10] [i_10] [i_10] [i_10 - 1] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -5545840917974427569LL)) ? (((((/* implicit */_Bool) 5553087257082533449ULL)) ? (5545840917974427569LL) : (arr_21 [i_12] [i_12] [i_12] [i_10 - 1] [i_10 - 1] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [13U] [i_10 + 1]))))), (((/* implicit */long long int) (-(arr_0 [i_11] [i_10 - 1]))))));
                                arr_45 [i_10] [i_9] [i_10] [i_11] [i_12] = max((((((/* implicit */_Bool) var_8)) ? (arr_41 [i_10 - 1] [i_10] [i_10] [i_10] [i_0] [i_0]) : (arr_41 [i_10 - 1] [i_10] [i_10] [i_10] [i_10] [i_10]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_41 [i_10 - 1] [i_10] [i_10] [i_10] [i_10 + 1] [i_10 - 1]))))));
                                arr_46 [i_0] [i_10] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_10);
                                var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)45))) : (17U)))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)4095)) == (var_4))) ? (arr_21 [i_0] [i_9] [i_10 + 1] [i_11] [i_12] [i_11] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_0 [i_10] [i_11]))))))) : (min((((4583237779896575128ULL) << (((/* implicit */int) var_0)))), (max((17192858869036097823ULL), (((/* implicit */unsigned long long int) (unsigned char)63))))))));
                            }
                        } 
                    } 
                    arr_47 [i_0] [i_10] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_9] [i_10 + 1] [i_10 + 1])) ? (arr_12 [i_0] [i_0] [i_9] [i_10 - 1]) : (arr_12 [i_10 + 1] [i_9] [i_0] [i_0])))) ? (((/* implicit */unsigned int) min((arr_12 [i_0] [i_0] [i_9] [i_10]), (arr_12 [i_0] [i_9] [i_10] [i_10])))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_9] [i_10 + 1] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (0U))));
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((int) var_5))) : (((min((((/* implicit */unsigned long long int) 0U)), (13351399965655729519ULL))) / (((/* implicit */unsigned long long int) var_7))))));
                    arr_48 [i_10] = ((/* implicit */unsigned long long int) ((short) arr_6 [i_0] [i_9] [i_9] [i_10 + 1]));
                }
            } 
        } 
    }
    var_27 &= ((/* implicit */unsigned short) var_2);
    var_28 = ((/* implicit */int) max((var_28), (var_2)));
}
