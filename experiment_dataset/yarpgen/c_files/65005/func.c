/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65005
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))) : (min((((/* implicit */unsigned long long int) var_5)), (7936207851244517380ULL)))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 161977811)) ? (((((/* implicit */_Bool) -161977822)) ? (((/* implicit */int) (signed char)-19)) : (-161977812))) : (((/* implicit */int) (_Bool)1))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((_Bool) min((arr_1 [i_0 - 2] [i_0 - 2]), (arr_1 [i_0] [i_0 - 2])))))));
        var_13 *= ((arr_1 [i_0] [i_0 + 1]) >> (((((/* implicit */int) ((unsigned short) arr_1 [i_0 - 2] [i_0 - 2]))) - (6990))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_2 = 3; i_2 < 10; i_2 += 4) 
        {
            var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((3604700461067359429ULL) * (((/* implicit */unsigned long long int) arr_0 [i_1])))) > (((/* implicit */unsigned long long int) 2561053090U))))), (((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */unsigned int) 2147483647)) : (1733914231U)))));
            var_15 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_4 [i_1 - 1])))), (((/* implicit */int) arr_9 [i_2 - 2] [i_1 - 1] [i_1 - 1]))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 1) 
            {
                for (int i_4 = 2; i_4 < 7; i_4 += 4) 
                {
                    {
                        arr_14 [i_4] [i_2] = ((/* implicit */unsigned char) arr_12 [(unsigned char)7] [i_2] [i_3] [i_4 + 2]);
                        var_16 = ((signed char) ((((/* implicit */_Bool) min((335779079), (((/* implicit */int) (unsigned short)43879))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_5 [i_1 - 1] [i_1 - 1])), (arr_8 [(unsigned char)2])))) : (((/* implicit */int) arr_4 [i_1]))));
                        arr_15 [i_4] [i_3 - 2] [i_2 + 1] [i_2 - 3] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (4294967279U)))) ? (((/* implicit */unsigned long long int) 4294967295U)) : (arr_11 [i_1] [i_1 - 1] [i_4 + 1])))) ? (((/* implicit */unsigned long long int) (+(1829122283)))) : (((((/* implicit */_Bool) 1543091112)) ? (arr_1 [i_1 - 1] [i_2 - 2]) : (arr_1 [i_1 - 1] [i_2 - 2])))));
                    }
                } 
            } 
            arr_16 [i_2] |= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_11 [i_1] [i_1] [0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2] [i_2]))))) : (((/* implicit */int) max(((short)-8304), (((/* implicit */short) arr_7 [i_1 - 1] [i_2] [3]))))))), (((int) ((((/* implicit */_Bool) (short)-25412)) ? (3322464071U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)41))))))));
            arr_17 [3ULL] = min(((~(arr_6 [i_2 - 3] [i_2 - 3] [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_12 [i_1] [i_1] [i_2] [i_2 + 1])), (7936207851244517380ULL)))) ? (arr_13 [i_2] [i_1] [i_1 - 1] [i_1 - 1]) : (min((arr_0 [9]), (((/* implicit */int) arr_4 [i_1]))))))));
        }
        for (int i_5 = 2; i_5 < 10; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_6 = 1; i_6 < 8; i_6 += 4) 
            {
                for (short i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) ((int) max((arr_10 [i_6 + 2] [i_5 - 2] [i_1 - 1]), (arr_10 [i_6 + 2] [(_Bool)1] [i_1 - 1]))));
                        var_18 += ((/* implicit */unsigned long long int) arr_0 [1]);
                    }
                } 
            } 
            var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned int) 1343392829)), (9U)));
        }
        var_20 = ((/* implicit */int) (signed char)127);
    }
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -1050714327)) ? (arr_29 [i_8 - 1] [i_8 - 1]) : (arr_29 [i_8 - 1] [i_8 - 1]))), (max((((/* implicit */unsigned int) (signed char)-125)), (arr_29 [i_8 - 1] [i_8 - 1]))))))));
        var_22 = ((/* implicit */signed char) max((var_22), (arr_27 [i_8])));
        arr_30 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((_Bool) min((7765775259531926117ULL), (((/* implicit */unsigned long long int) 1133464691U)))));
    }
    var_23 = -1050714327;
    var_24 += ((/* implicit */long long int) var_7);
}
