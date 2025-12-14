/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55784
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
    for (unsigned int i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_2 [i_0])))) >= (((arr_1 [9U] [i_0]) ? (((/* implicit */long long int) 4294967295U)) : (arr_0 [i_0] [i_0]))))) && (((/* implicit */_Bool) ((((576460752303423487ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (unsigned char)124)) * (((/* implicit */int) (unsigned short)0)))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 4])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)65535)))))))));
        var_14 -= ((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */int) max((arr_2 [i_0]), (arr_2 [i_0])))), ((-(((/* implicit */int) (unsigned short)29055)))))));
        var_15 = ((/* implicit */long long int) ((int) (+(((arr_0 [i_0] [i_0 - 2]) - (((/* implicit */long long int) ((/* implicit */int) arr_2 [(signed char)1]))))))));
        arr_4 [i_0 - 4] [i_0] = ((/* implicit */_Bool) (((((((+((-9223372036854775807LL - 1LL)))) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) < (((((/* implicit */_Bool) (unsigned char)255)) ? (2264509254U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)124))))))))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        arr_12 [i_0] [i_2] [(unsigned short)6] [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((arr_2 [i_2 + 3]) ? (((/* implicit */int) arr_2 [i_2 + 3])) : (((/* implicit */int) arr_2 [i_2 + 3]))))), (max((((/* implicit */long long int) arr_2 [i_2 + 3])), (18014398375264256LL)))));
                        arr_13 [i_2] [i_2] [i_2] [i_1] [i_0 - 1] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */int) arr_6 [i_1] [i_3])) : (((/* implicit */int) arr_9 [i_0] [i_2] [i_0] [i_3] [i_2]))))) ? ((-(arr_11 [i_0] [i_0] [i_2 - 1] [i_3] [7LL]))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_9 [(_Bool)1] [i_2] [i_2] [i_2] [6LL]))))))), (max((((arr_1 [i_0] [i_0]) ? (18374686479671623680ULL) : (((/* implicit */unsigned long long int) arr_0 [i_1] [i_2])))), (((/* implicit */unsigned long long int) ((arr_2 [i_3]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_11 [i_0] [i_0] [i_2] [i_3] [i_1]))))))));
                        arr_14 [1] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)124)), ((unsigned short)65535)));
                    }
                } 
            } 
        } 
    }
    for (long long int i_4 = 1; i_4 < 14; i_4 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (_Bool)1)), (2303591209400008704ULL)));
        var_17 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned char)255)) % (((/* implicit */int) (unsigned char)255))))))));
    }
    for (long long int i_5 = 1; i_5 < 14; i_5 += 3) /* same iter space */
    {
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) 1073741824)) : (-325139511555404090LL)));
        arr_20 [10] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1939500358)) ? (((((/* implicit */_Bool) ((var_4) ^ (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5 + 3])))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_5] [i_5]))) | (262143U))) : (((/* implicit */unsigned int) ((var_8) ^ (((/* implicit */int) arr_15 [i_5 + 2] [i_5]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)22077)))));
    }
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_4))));
    var_19 = ((/* implicit */long long int) (+((-(((((/* implicit */int) var_10)) | (((/* implicit */int) var_2))))))));
    var_20 = min((((((/* implicit */int) ((unsigned short) -5748223116773126238LL))) + ((-(((/* implicit */int) (unsigned char)140)))))), (((/* implicit */int) var_13)));
}
