/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66060
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (signed char)-61)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9240))) : (((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_3))))))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_11 = ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]);
            /* LoopNest 2 */
            for (unsigned int i_2 = 3; i_2 < 20; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) <= (((((/* implicit */_Bool) arr_4 [i_1] [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2 - 2] [i_0] [i_0] [i_1]))) : (4294967282U)))));
                        var_13 = ((/* implicit */unsigned long long int) arr_0 [i_2]);
                    }
                } 
            } 
            arr_11 [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) ((short) (unsigned char)191))), (((((((/* implicit */long long int) 4294967258U)) | (var_9))) >> (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)31263)) || (((/* implicit */_Bool) (unsigned char)65)))))))));
        }
    }
    for (unsigned long long int i_4 = 2; i_4 < 17; i_4 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), ((-(arr_9 [i_4 - 1] [i_4 - 1])))))) ? (((((/* implicit */int) (signed char)-94)) / (((/* implicit */int) arr_7 [i_4])))) : ((~(((((/* implicit */_Bool) 15962530658371702157ULL)) ? (((/* implicit */int) (unsigned short)34274)) : (((/* implicit */int) (short)9239))))))));
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 14; i_5 += 4) 
        {
            for (short i_6 = 1; i_6 < 17; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    {
                        var_15 = ((/* implicit */signed char) 7U);
                        arr_22 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((arr_12 [i_7]) ? (var_3) : (((/* implicit */unsigned long long int) arr_2 [i_4]))))))) ? (max((max((var_3), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) min((arr_13 [i_4] [i_4 + 1]), (((/* implicit */long long int) (unsigned char)65))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_9 [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31262)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 13U)) ? (((/* implicit */int) var_0)) : (var_1)))) : (((var_7) ^ (((/* implicit */unsigned int) 4194303)))))))));
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (!(min((((arr_9 [i_5 + 4] [i_5 + 4]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5] [i_6] [i_5]))))), ((!(((/* implicit */_Bool) arr_6 [i_4])))))))))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)34274)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)161))) : (37U)));
        var_18 = ((/* implicit */signed char) min((min((((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)205))) : (57U))), (13U))), (((/* implicit */unsigned int) min(((signed char)104), ((signed char)-105))))));
    }
    for (unsigned char i_8 = 4; i_8 < 21; i_8 += 3) 
    {
        var_19 -= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 3027655060U))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_9 = 0; i_9 < 22; i_9 += 2) /* same iter space */
        {
            arr_29 [i_8 - 2] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_28 [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_9]))) : (arr_28 [i_8])));
            var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_8 - 1])) ? (3027655060U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_8 - 4])))));
            arr_30 [i_8] [i_8] = arr_7 [i_8 - 2];
        }
        /* vectorizable */
        for (signed char i_10 = 0; i_10 < 22; i_10 += 2) /* same iter space */
        {
            arr_33 [i_8] [i_8] = ((long long int) (!(((/* implicit */_Bool) 4194298))));
            arr_34 [i_10] [i_10] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)83)) ? (4294967283U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))));
        }
        var_21 = ((((/* implicit */_Bool) min((arr_1 [i_8]), (arr_1 [i_8 - 4])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -4194299)) ? (4194317) : (((/* implicit */int) arr_1 [i_8 - 1]))))) : (((((/* implicit */_Bool) 536870784)) ? (((/* implicit */long long int) arr_28 [i_8])) : (arr_25 [i_8 - 3]))));
    }
    var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */long long int) (signed char)-63)), (var_9))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) ((signed char) 18446744073709551615ULL))));
    var_23 = ((/* implicit */unsigned int) 0ULL);
    var_24 = ((/* implicit */unsigned int) ((var_3) << ((((+(var_3))) - (11107930742977463757ULL)))));
    /* LoopNest 2 */
    for (unsigned short i_11 = 2; i_11 < 24; i_11 += 1) 
    {
        for (unsigned char i_12 = 0; i_12 < 25; i_12 += 1) 
        {
            {
                var_25 = ((/* implicit */signed char) min((arr_38 [i_11 - 2]), (((/* implicit */int) ((short) (signed char)107)))));
                var_26 = arr_36 [i_11 - 2];
            }
        } 
    } 
}
