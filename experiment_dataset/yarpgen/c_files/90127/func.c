/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90127
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (unsigned char)8)) ? (16027627435470125941ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) + (((/* implicit */int) (unsigned char)119))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2419116638239425679ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)209))) * (arr_1 [i_0] [i_0]))) >> (((((arr_1 [i_0] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) - (1445991947U)))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) min((var_8), (((/* implicit */short) var_2)))))) < (((arr_1 [i_0] [i_4]) & (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) ? (var_0) : (((/* implicit */unsigned int) ((((((/* implicit */int) var_16)) << (((16027627435470125957ULL) - (16027627435470125944ULL))))) / (((/* implicit */int) arr_0 [i_1])))))));
                                arr_18 [i_0] = ((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                    arr_19 [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) arr_16 [i_0] [(signed char)12] [(_Bool)1] [(signed char)2] [i_2]);
                    var_19 = ((/* implicit */long long int) ((2419116638239425690ULL) | (17578572549385599964ULL)));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_22 [i_0] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_0] [i_0])) != (((/* implicit */int) (unsigned short)54316))));
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_1 [i_5] [i_0]) - (arr_1 [i_0] [i_5])))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_5])) ? (arr_1 [i_0] [i_5]) : (arr_1 [(unsigned char)14] [i_5]))) : (((((/* implicit */_Bool) var_17)) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_5])))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            var_21 = ((/* implicit */short) (unsigned short)11220);
            arr_25 [i_0] = arr_5 [i_0] [11ULL] [i_0];
        }
    }
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 22; i_7 += 2) 
    {
        for (short i_8 = 0; i_8 < 22; i_8 += 4) 
        {
            {
                arr_33 [16ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((var_17), (var_17)))) & (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (2419116638239425680ULL)))))) ? (((arr_28 [i_8]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)47))))) : (((var_3) * (((/* implicit */unsigned long long int) 6584072956461092116LL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)11220)) / (((/* implicit */int) var_10))))) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)58544)))))));
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    for (unsigned char i_10 = 0; i_10 < 22; i_10 += 1) 
                    {
                        {
                            arr_39 [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((signed char)-115), (arr_34 [i_8] [i_8] [i_10])))) ? (((((/* implicit */int) var_2)) - (((/* implicit */int) arr_34 [i_10] [i_9] [i_8])))) : (((((/* implicit */_Bool) 2189202835181811605ULL)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned short)11248))))));
                            var_22 = var_4;
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 2) 
                {
                    for (short i_12 = 0; i_12 < 22; i_12 += 2) 
                    {
                        for (int i_13 = 0; i_13 < 22; i_13 += 2) 
                        {
                            {
                                arr_47 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [(short)7] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_46 [i_7] [i_8] [i_11] [i_12])))) && (((((/* implicit */_Bool) arr_46 [i_8] [i_8] [i_12] [i_13])) || (((/* implicit */_Bool) arr_46 [i_7] [i_12] [i_11] [i_12]))))));
                                arr_48 [i_7] [i_7] [i_8] [i_11] [i_7] [i_12] [i_13] = var_12;
                            }
                        } 
                    } 
                } 
                var_23 = (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16384))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_7] [i_7] [i_8] [i_7] [i_8] [i_8])))))));
            }
        } 
    } 
}
