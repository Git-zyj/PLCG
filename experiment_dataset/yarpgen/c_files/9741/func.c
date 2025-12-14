/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9741
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) min((arr_0 [i_0]), (((((/* implicit */_Bool) var_12)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0])), ((unsigned short)0))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)23846)) ? (((long long int) (_Bool)1)) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))) * (((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))));
        arr_5 [i_0] = ((/* implicit */signed char) max((((max((var_11), (((/* implicit */long long int) (unsigned char)67)))) & (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0])), ((unsigned short)20))))))), (min((((/* implicit */long long int) max((((/* implicit */short) (signed char)49)), (arr_1 [i_0])))), (min((((/* implicit */long long int) (unsigned short)65508)), (arr_0 [i_0])))))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) * (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_15))))));
    }
    for (signed char i_1 = 2; i_1 < 13; i_1 += 4) 
    {
        arr_8 [i_1] [(_Bool)1] = ((/* implicit */unsigned char) (unsigned short)10);
        arr_9 [0U] = ((/* implicit */long long int) (((~(((/* implicit */int) arr_1 [i_1 - 1])))) ^ ((-(((/* implicit */int) (unsigned short)0))))));
        arr_10 [i_1] = ((/* implicit */unsigned short) ((unsigned int) max((((/* implicit */unsigned long long int) arr_0 [i_1 - 2])), (max((((/* implicit */unsigned long long int) arr_7 [i_1])), (var_5))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-6)) ? (max((((/* implicit */unsigned long long int) arr_7 [i_1 + 1])), (min((0ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)25218))) - (1093224024U)))) % ((+(arr_18 [i_1] [i_1 + 1] [i_1])))))));
                        arr_19 [i_4] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_1 - 1] [i_2] [i_1 - 1] [i_4] [i_2])) && (((/* implicit */_Bool) arr_17 [i_1] [i_2] [i_3] [i_4] [i_2])))));
                    }
                } 
            } 
        } 
    }
    var_22 = ((/* implicit */signed char) var_16);
    /* LoopSeq 1 */
    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
    {
        var_23 = ((/* implicit */short) ((min((max((((/* implicit */unsigned int) (unsigned short)65528)), (arr_22 [i_5] [i_5]))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)-20))))))) ^ (((((/* implicit */_Bool) min((arr_22 [i_5] [i_5]), (var_6)))) ? (min((3123944780U), (((/* implicit */unsigned int) arr_20 [i_5])))) : ((~(3123944804U)))))));
        arr_24 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10ULL)) ? (min((min((((/* implicit */unsigned int) (short)-9421)), (4U))), (((/* implicit */unsigned int) (unsigned short)0)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)22006)))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_6 = 4; i_6 < 13; i_6 += 4) /* same iter space */
        {
            arr_27 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_5] [i_5] [i_6])) ? (arr_23 [i_5] [15U]) : (((/* implicit */long long int) ((/* implicit */int) (short)16894)))))) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)-2421))));
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_6 + 1] [i_6 - 1])) ? (715544848U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_6 + 3] [i_6 - 1] [i_6 - 3])))));
            var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(arr_0 [i_5])))) + (((((/* implicit */_Bool) 3123944780U)) ? (18446744073709551610ULL) : (((/* implicit */unsigned long long int) var_8))))));
            arr_28 [i_5] = ((/* implicit */short) arr_23 [i_5] [i_5]);
            var_26 = ((/* implicit */short) ((((/* implicit */int) arr_21 [i_6 + 4] [i_6 + 4])) ^ (((/* implicit */int) arr_25 [5LL] [i_6 - 2] [i_6]))));
        }
        for (int i_7 = 4; i_7 < 13; i_7 += 4) /* same iter space */
        {
            arr_31 [i_7] = ((/* implicit */signed char) max((((/* implicit */long long int) max((var_19), (((/* implicit */unsigned int) max(((unsigned char)60), (((/* implicit */unsigned char) var_3)))))))), (min((((/* implicit */long long int) 937459288)), ((-(-19LL)))))));
            var_27 = ((/* implicit */unsigned short) var_11);
            arr_32 [i_7 + 3] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4403448579834095920LL)) ? (min((26LL), (((/* implicit */long long int) (unsigned short)46293)))) : (27LL)));
        }
        for (int i_8 = 4; i_8 < 13; i_8 += 4) /* same iter space */
        {
            arr_36 [i_8] = ((/* implicit */int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)58118))))), (((-19LL) * (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49417)))))));
            var_28 = (((~(((((/* implicit */_Bool) var_18)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) << (((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-6322)))) + (6335))));
            var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 1104533653U))))) < (((((/* implicit */_Bool) arr_22 [i_5] [i_8])) ? (((/* implicit */int) max((var_18), (((/* implicit */unsigned short) (signed char)-122))))) : (((((/* implicit */_Bool) (short)-15132)) ? (((/* implicit */int) arr_1 [i_5])) : (((/* implicit */int) (unsigned char)115))))))));
        }
        /* LoopNest 3 */
        for (long long int i_9 = 2; i_9 < 15; i_9 += 1) 
        {
            for (signed char i_10 = 0; i_10 < 17; i_10 += 1) 
            {
                for (signed char i_11 = 0; i_11 < 17; i_11 += 1) 
                {
                    {
                        arr_45 [i_5] [i_10] [i_9] [i_9] = ((/* implicit */unsigned char) arr_23 [i_5] [i_11]);
                        var_30 = ((/* implicit */signed char) ((short) ((((/* implicit */int) (short)32767)) == (((/* implicit */int) arr_39 [i_9] [i_9])))));
                        arr_46 [i_5] [i_5] [i_5] [i_5] [i_9] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65524))) * (2123145145U))) != (var_4)))) * ((+(((/* implicit */int) arr_30 [i_5] [i_9 + 2]))))));
                        arr_47 [i_9] [i_9 - 2] [i_9] = ((/* implicit */_Bool) (short)-32750);
                    }
                } 
            } 
        } 
    }
}
