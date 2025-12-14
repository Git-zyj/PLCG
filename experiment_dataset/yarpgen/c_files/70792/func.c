/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70792
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) min((127LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0])))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 - 2] [i_2 + 1] [(unsigned char)10])) ? (((/* implicit */unsigned long long int) arr_6 [i_2 - 1] [i_2 - 1] [i_2])) : (6262450626437782484ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2])) || (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2 + 1])))))) : (min((6262450626437782484ULL), (((/* implicit */unsigned long long int) arr_5 [i_2 - 2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) max((((((/* implicit */_Bool) min((((/* implicit */int) arr_11 [i_3 + 1] [i_2] [i_1] [i_0])), (arr_5 [i_3 + 2])))) ? (127LL) : (((/* implicit */long long int) ((/* implicit */int) ((127LL) < (((/* implicit */long long int) 494457608)))))))), (((/* implicit */long long int) arr_3 [i_2 - 2] [i_2 - 2] [i_3 + 1]))));
                                var_19 = ((/* implicit */int) min((((((/* implicit */_Bool) (signed char)-1)) ? (12184293447271769137ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_6 [i_0] [i_0] [i_0]) <= (((/* implicit */int) (_Bool)1)))))))), (((/* implicit */unsigned long long int) 144LL))));
                                arr_16 [i_2] [i_2] [i_2] [i_1] [i_2] [i_0] [i_3 - 2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((6896655057016190327ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                                arr_17 [i_2 - 2] [i_3] [i_1] [i_3] [i_3 + 3] = ((/* implicit */int) (_Bool)1);
                                arr_18 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) -763573103)) : (12184293447271769132ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_4])))))))) ? ((~(((/* implicit */int) arr_3 [i_2] [i_3] [i_3])))) : (((/* implicit */int) (signed char)31))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (int i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                for (unsigned char i_7 = 0; i_7 < 15; i_7 += 1) 
                {
                    {
                        arr_28 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((-309593029), (((/* implicit */int) (unsigned short)7))))) ? (((/* implicit */unsigned long long int) arr_24 [i_7] [i_0] [i_5] [i_0])) : (arr_0 [i_0]))) > ((-(arr_0 [i_0])))));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_13 [i_6]) / (arr_13 [i_0])))) ? (((/* implicit */int) ((unsigned char) arr_13 [i_0]))) : ((-(((/* implicit */int) (unsigned char)255))))));
                        arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (~(arr_6 [i_5] [i_5] [i_5])))))) ? (((((/* implicit */_Bool) ((unsigned char) 18446744073709551615ULL))) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) (signed char)52)))))) : ((~((~(((/* implicit */int) arr_27 [i_0] [i_0]))))))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    var_22 = (-(min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-70))) : (var_11))), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))))));
}
