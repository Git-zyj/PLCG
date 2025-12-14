/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67478
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
    var_11 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned int) ((((203278979852826750ULL) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0]))))))) & (((/* implicit */unsigned long long int) 3288203128U))));
        var_13 = ((/* implicit */short) 512U);
    }
    for (unsigned short i_1 = 1; i_1 < 10; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            for (unsigned int i_3 = 2; i_3 < 12; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 2; i_4 < 12; i_4 += 1) 
                {
                    {
                        var_14 = (((!(((/* implicit */_Bool) var_1)))) ? (4294967295U) : (((((/* implicit */unsigned int) ((/* implicit */int) ((arr_4 [i_3]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4]))))))) % (4294966783U))));
                        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_3)), (487U))))));
                        arr_14 [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) 17U)) <= (arr_3 [i_1 + 2]))))));
                    }
                } 
            } 
        } 
        arr_15 [i_1] = arr_6 [i_1] [i_1] [i_1];
        /* LoopSeq 3 */
        for (unsigned short i_5 = 3; i_5 < 12; i_5 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_6 = 1; i_6 < 13; i_6 += 3) 
            {
                for (short i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    {
                        var_16 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((4294966787U) - (516U)))) ? (516U) : (516U)))), (((var_9) - (((/* implicit */unsigned long long int) 4294966783U))))));
                        var_17 += ((/* implicit */unsigned char) var_0);
                        var_18 = ((/* implicit */unsigned long long int) arr_10 [i_1] [i_1 + 3] [i_6] [i_6 + 1]);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_8 = 1; i_8 < 13; i_8 += 1) 
            {
                for (short i_9 = 2; i_9 < 10; i_9 += 3) 
                {
                    {
                        var_19 = ((/* implicit */short) ((((((/* implicit */int) arr_26 [i_5 - 2] [8U] [8U] [i_5 - 1])) | (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) (unsigned char)49))))))) ^ ((~(((/* implicit */int) arr_5 [i_5 - 1]))))));
                        var_20 = ((/* implicit */unsigned long long int) max((var_10), (max((((/* implicit */unsigned int) var_0)), (514U)))));
                    }
                } 
            } 
            arr_29 [i_1 + 2] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)195))));
        }
        for (unsigned int i_10 = 0; i_10 < 14; i_10 += 3) 
        {
            var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (min((((8600681861520712589ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)188)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)40635))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((0U), (((/* implicit */unsigned int) (unsigned short)24911)))))))))));
            /* LoopNest 2 */
            for (unsigned short i_11 = 0; i_11 < 14; i_11 += 2) 
            {
                for (unsigned int i_12 = 0; i_12 < 14; i_12 += 4) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) 1600793555U);
                        var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)172)) && (((/* implicit */_Bool) arr_23 [i_1 + 3] [i_1 + 2] [i_1 + 1]))))), ((+(((/* implicit */int) min((((/* implicit */unsigned char) arr_35 [i_10] [i_11] [i_11] [(short)0] [i_10])), (var_4))))))));
                        var_24 = ((/* implicit */unsigned char) min((max((4294966798U), (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) (unsigned char)188))));
                    }
                } 
            } 
            var_25 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (unsigned char)172))))));
        }
        for (unsigned char i_13 = 4; i_13 < 12; i_13 += 2) 
        {
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)40635))))) - (((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)67))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)67))))) : (497U)))));
            arr_39 [i_1] [i_1] [i_13] |= ((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) % (274877906943ULL)))));
        }
    }
}
