/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6615
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (short i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                for (unsigned int i_3 = 2; i_3 < 14; i_3 += 2) 
                {
                    {
                        var_15 ^= ((/* implicit */signed char) ((long long int) (+(((/* implicit */int) max((((/* implicit */unsigned char) arr_9 [i_0] [i_1 + 1] [i_2] [i_1] [i_0] [i_1])), (var_11)))))));
                        var_16 -= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3578436937U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_5 [i_1])))))))));
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((var_14) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (short)-25895))))))))))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((18446744073709551610ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25912))))), (((/* implicit */unsigned long long int) ((unsigned short) 18446744073709551610ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-25900)) && (((/* implicit */_Bool) 6ULL)))))) : (((arr_8 [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) (short)25894)))))));
        var_19 -= ((/* implicit */_Bool) arr_8 [i_0]);
    }
    for (unsigned int i_4 = 2; i_4 < 12; i_4 += 2) 
    {
        var_20 = (!(((/* implicit */_Bool) min((((/* implicit */short) arr_9 [12LL] [i_4] [i_4 - 1] [(short)11] [i_4 + 1] [i_4 - 1])), ((short)25896)))));
        arr_14 [4ULL] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_11 [i_4 - 2] [i_4 - 1])))) && (((/* implicit */_Bool) (~((-(arr_11 [i_4] [i_4 - 2]))))))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (arr_10 [i_4])));
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((27ULL) > (24ULL)))), (((((/* implicit */_Bool) -234220506)) ? (13ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9823))))))))));
    }
    for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        arr_17 [i_5] [i_5] = ((/* implicit */short) (-(min((1998605425U), (((/* implicit */unsigned int) (_Bool)1))))));
        var_23 -= ((/* implicit */long long int) min((((/* implicit */short) ((_Bool) (short)25896))), ((short)25880)));
    }
    /* LoopNest 3 */
    for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
    {
        for (unsigned long long int i_7 = 2; i_7 < 20; i_7 += 2) 
        {
            for (unsigned char i_8 = 0; i_8 < 22; i_8 += 2) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) ((var_12) >> (((((/* implicit */int) arr_18 [i_7] [i_6])) - (20850)))))) ? (((/* implicit */long long int) max((234220505), (((/* implicit */int) (signed char)32))))) : (arr_24 [i_6] [i_6] [i_6] [i_6]))));
                    var_25 -= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_18 [i_7 + 1] [i_7 - 1])) ? (914115345738003283ULL) : (((/* implicit */unsigned long long int) var_12))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_9 = 3; i_9 < 22; i_9 += 2) 
    {
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (+(min((((/* implicit */unsigned long long int) ((717193694629263070LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)247)))))), (144115188073758720ULL))))))));
        /* LoopNest 2 */
        for (long long int i_10 = 3; i_10 < 22; i_10 += 2) 
        {
            for (int i_11 = 0; i_11 < 24; i_11 += 2) 
            {
                {
                    var_27 = ((/* implicit */int) arr_31 [i_10 + 1] [i_9 + 1]);
                    arr_32 [i_9 - 2] [i_10] [(short)14] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                    arr_33 [i_9] [i_10] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)-125))));
                }
            } 
        } 
        arr_34 [i_9] = ((/* implicit */int) arr_31 [i_9 + 2] [i_9 - 3]);
        arr_35 [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) 234220505)) ? (234220505) : (((/* implicit */int) (unsigned short)40581))));
        var_28 = ((((/* implicit */_Bool) arr_31 [i_9 + 2] [i_9 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [(unsigned char)6])) || (((/* implicit */_Bool) (short)5682)))))) : (((arr_31 [i_9] [i_9 - 1]) << (((((/* implicit */int) arr_30 [i_9] [i_9 - 1] [i_9])) - (107))))));
    }
    for (long long int i_12 = 0; i_12 < 14; i_12 += 2) 
    {
        arr_39 [i_12] = ((/* implicit */long long int) (((~(((((/* implicit */_Bool) (short)-25897)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15602))) : (14819078763766689221ULL))))) >> (((-234220517) + (234220538)))));
        var_29 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((arr_19 [i_12]) ? (((/* implicit */int) arr_19 [i_12])) : (((/* implicit */int) arr_4 [i_12] [i_12] [i_12]))))), (min((((/* implicit */unsigned long long int) (short)-25891)), (18446744073709551599ULL)))));
        var_30 -= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (short)10340)) ? (((/* implicit */int) (unsigned char)116)) : (((/* implicit */int) (unsigned char)94))))));
        var_31 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)116)) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) (short)25894))))))));
    }
    for (unsigned char i_13 = 0; i_13 < 19; i_13 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_14 = 2; i_14 < 15; i_14 += 2) 
        {
            arr_46 [i_13] [i_14] [i_13] = ((/* implicit */unsigned char) arr_42 [i_13]);
            arr_47 [i_13] [i_14] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (unsigned char)232))))));
            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) max((min(((short)-25878), ((short)-25878))), (((/* implicit */short) min((arr_29 [i_14 - 2] [i_14 + 3]), (arr_30 [i_14 - 2] [i_14 + 4] [5LL])))))))));
        }
        for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 2) 
        {
            var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) arr_25 [i_13] [i_15]))));
            var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned char)116)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-114))) / (14525209015615274597ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_13]))))))))));
            var_35 ^= ((/* implicit */unsigned char) ((unsigned int) ((unsigned char) (!((_Bool)1)))));
            var_36 = ((/* implicit */_Bool) max(((short)-25895), ((short)-25895)));
        }
        var_37 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((max((2147483647), (((/* implicit */int) (short)25892)))), (2147483647)))), (max((((((/* implicit */_Bool) -3290404819715474735LL)) ? (3921535058094277018ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65524))))), (((/* implicit */unsigned long long int) max((arr_24 [i_13] [i_13] [i_13] [i_13]), (((/* implicit */long long int) (short)-25901)))))))));
        var_38 -= min((((/* implicit */unsigned long long int) min((((/* implicit */short) (signed char)58)), ((short)17107)))), ((~(6ULL))));
    }
}
