/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76778
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
    var_20 = ((/* implicit */int) (~(var_4)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_0 [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_5 [i_2] [i_2] [i_2 + 1] [i_2 + 1]))) ? (((((/* implicit */int) arr_5 [i_2] [i_2] [i_2 - 1] [i_2])) + (((/* implicit */int) arr_5 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 - 1])))) : (((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 - 1])) ? (((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2])) : (((/* implicit */int) arr_5 [(unsigned char)2] [i_2] [i_2 - 1] [(unsigned char)2]))))));
                    var_22 = ((/* implicit */signed char) max(((-(((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 1])))), (((((/* implicit */_Bool) 7)) ? (((/* implicit */int) arr_6 [i_2 + 1] [i_2 - 1])) : (((/* implicit */int) (unsigned short)14483))))));
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2 - 1]))))))))));
                }
            } 
        } 
        var_24 = ((signed char) (((!(((/* implicit */_Bool) (unsigned short)56277)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_4 [i_0]))))) : (((unsigned long long int) (short)9))));
        arr_7 [i_0] = ((/* implicit */short) ((int) arr_0 [i_0]));
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 2) 
            {
                for (unsigned char i_5 = 2; i_5 < 10; i_5 += 3) 
                {
                    {
                        arr_16 [i_0] [i_3] [i_4] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (short)-8))))), (arr_15 [i_0] [i_4 - 2] [i_4 + 2] [i_5 + 2])))) ? (min((((/* implicit */unsigned int) (~(((/* implicit */int) var_16))))), (((((/* implicit */_Bool) arr_13 [i_0] [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_5 - 1] [i_4] [i_0] [i_0]))) : (2127708324U))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_4] [i_3] [i_4 + 1] [i_5 + 1])))))));
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) ((16194938336612259085ULL) > (2251805737097292538ULL)))), ((-(((/* implicit */int) arr_14 [i_0] [i_3] [i_4 - 1] [i_6])))))) * ((-(((/* implicit */int) (short)-32755))))));
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-8)) ? (((((/* implicit */_Bool) max(((unsigned short)65535), (arr_9 [i_0] [i_5 + 2])))) ? (((/* implicit */int) (signed char)35)) : (((/* implicit */int) arr_3 [i_4 - 2])))) : (((/* implicit */int) (short)16))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) 
                        {
                            arr_22 [i_0] [i_0] [i_3] [i_0] [i_4 - 1] [i_5 + 3] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_21 [i_5 + 2] [i_5 - 1] [i_5 + 2] [i_5 + 2] [i_5])) != (((/* implicit */int) arr_21 [i_5 - 1] [i_5 - 2] [i_5] [i_5 + 3] [(unsigned short)10]))))) % (((((/* implicit */_Bool) arr_21 [i_5 - 2] [i_5 - 2] [i_5 + 2] [i_5 + 2] [i_5])) ? (((/* implicit */int) arr_21 [i_5 + 1] [i_5 - 1] [i_5 + 3] [i_5 - 1] [i_5 + 3])) : (((/* implicit */int) (unsigned short)7))))));
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_4 + 1] [i_0] [i_4 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_5 + 1] [i_5 + 1] [i_4 + 2] [i_0])))))) ? (((/* implicit */int) (signed char)-9)) : (((((/* implicit */_Bool) arr_13 [i_4 + 2] [i_5 + 1] [i_5 + 3])) ? ((~(arr_0 [i_0]))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (unsigned short)33290)))))))));
                        }
                        var_27 -= ((/* implicit */int) (((!(((/* implicit */_Bool) arr_14 [i_4 + 3] [i_4 + 1] [i_4 - 2] [i_4 + 3])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (signed char)-8)))))));
                        arr_24 [i_5] [i_4] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0] [i_4 + 2] [i_0] [i_5 - 1])) ? (arr_0 [i_4 - 2]) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_4 [i_5])), (((((/* implicit */int) (signed char)127)) / (((/* implicit */int) (signed char)-9))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11965)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)16))) : (arr_15 [6ULL] [i_4] [i_3] [i_0])))) ? (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_4] [i_4] [i_5 - 2] [i_5 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (18021981630309575002ULL))) : (((((/* implicit */_Bool) arr_1 [i_3])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_3] [i_4] [(unsigned char)0])))))))));
                    }
                } 
            } 
        } 
    }
    var_28 = ((/* implicit */int) max((((/* implicit */unsigned int) var_1)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (-381294298) : (((/* implicit */int) var_16))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2251805737097292538ULL)) ? (var_7) : (var_8)))) : (max((((/* implicit */unsigned int) var_3)), (2355681871U)))))));
}
