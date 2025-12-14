/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70316
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
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) arr_0 [i_0 - 1] [i_0 - 1]))) >> (((/* implicit */int) (signed char)19))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) max((max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) ((((/* implicit */long long int) (+(3334936701U)))) >= (arr_5 [i_0] [i_1] [i_1]))))));
                    arr_8 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 6026280176582425765LL)) ? (4294967268U) : (max((arr_3 [i_0 + 1]), (arr_3 [i_0 + 1])))));
                    var_19 = (~(((/* implicit */int) var_14)));
                    arr_9 [9U] [4U] [i_2] [i_0] = ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? ((-(((((/* implicit */_Bool) arr_7 [i_0])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0]))))))) : (((/* implicit */long long int) arr_3 [i_0])));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_3 = 3; i_3 < 9; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                for (short i_5 = 3; i_5 < 10; i_5 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) var_0);
                        arr_20 [i_0] [i_0] [i_0 - 1] = ((/* implicit */long long int) ((min(((-(((/* implicit */int) arr_13 [i_0] [i_5 - 1])))), (((/* implicit */int) ((((/* implicit */int) (short)32746)) > (((/* implicit */int) arr_1 [i_5 + 2]))))))) & (((((/* implicit */int) arr_13 [i_0] [i_0 - 1])) * ((-(((/* implicit */int) (_Bool)0))))))));
                    }
                } 
            } 
        } 
        arr_21 [i_0] = ((/* implicit */short) 5790825324055443773ULL);
        var_21 = max((((long long int) arr_10 [i_0])), (((/* implicit */long long int) max((((/* implicit */int) var_15)), (((((/* implicit */_Bool) arr_3 [i_0])) ? (87287782) : (87287782)))))));
    }
    for (long long int i_6 = 2; i_6 < 13; i_6 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_7 = 3; i_7 < 13; i_7 += 2) 
        {
            for (signed char i_8 = 3; i_8 < 16; i_8 += 4) 
            {
                for (unsigned short i_9 = 0; i_9 < 17; i_9 += 4) 
                {
                    {
                        var_22 = ((/* implicit */long long int) ((signed char) 8742994057967814469LL));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_13)), (-2046819998577993812LL)))), (((((/* implicit */_Bool) var_7)) ? (arr_32 [i_6] [i_7] [i_8] [i_9]) : (5790825324055443773ULL)))))) && ((((_Bool)0) || (((/* implicit */_Bool) arr_25 [i_6 + 4]))))));
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((-1404968074) ^ (min((((/* implicit */int) arr_26 [i_6 + 3] [i_6] [i_8 + 1])), (1085787450))))))));
                    }
                } 
            } 
        } 
        var_25 += ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_6 + 4] [i_6])))))))), (max((((/* implicit */unsigned long long int) (short)-32764)), (((var_11) >> (((((/* implicit */int) var_10)) - (25853)))))))));
        var_26 &= ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_27 [i_6 - 2] [(short)14] [i_6 + 4] [i_6])) ? (arr_22 [i_6 + 1] [i_6 + 4]) : (min((((/* implicit */unsigned int) (unsigned short)21017)), (640464957U))))));
        arr_33 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) 379321453U)) ? (((var_9) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)175))))) : (((/* implicit */long long int) ((unsigned int) arr_26 [i_6] [i_6] [i_6]))))) : (var_9)));
    }
    /* LoopNest 3 */
    for (long long int i_10 = 3; i_10 < 8; i_10 += 2) 
    {
        for (unsigned int i_11 = 0; i_11 < 11; i_11 += 4) 
        {
            for (unsigned int i_12 = 0; i_12 < 11; i_12 += 4) 
            {
                {
                    arr_41 [i_10] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((arr_31 [(short)14] [i_10 + 1] [i_12] [i_11]) >= (arr_31 [i_11] [i_10 - 3] [i_12] [i_12]))))) != (min((((/* implicit */long long int) (_Bool)1)), (1750153134623369389LL)))));
                    var_27 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((short) var_6))) || (((/* implicit */_Bool) ((long long int) var_13))))) || (((/* implicit */_Bool) max((arr_35 [i_11]), (arr_35 [i_11]))))));
                    var_28 = (i_10 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */int) var_10)) << (((max((((/* implicit */int) arr_7 [i_10])), (arr_15 [i_10]))) - (808)))))) : (((/* implicit */unsigned short) ((((/* implicit */int) var_10)) << (((((max((((/* implicit */int) arr_7 [i_10])), (arr_15 [i_10]))) - (808))) - (22039))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        for (long long int i_14 = 0; i_14 < 15; i_14 += 2) 
        {
            {
                var_29 = ((/* implicit */int) 12655918749654107842ULL);
                arr_47 [8LL] [13LL] = var_8;
                var_30 = var_12;
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) var_15)), (((((/* implicit */_Bool) (short)-2142)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_15))))))), (((/* implicit */long long int) (-((~(((/* implicit */int) (unsigned short)53689)))))))));
}
