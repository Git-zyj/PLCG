/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83307
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
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_16 += ((/* implicit */signed char) var_2);
        var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (signed char)0)) ? (((((/* implicit */_Bool) (signed char)0)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)140))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)61))))) : (min((((long long int) (unsigned char)0)), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_4)))))))));
        arr_3 [i_0] [(unsigned short)18] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) >= (9529392932782701230ULL)));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)2)) >> (((5511434706200394454ULL) - (5511434706200394447ULL)))))) ? (((var_0) * (((/* implicit */unsigned long long int) arr_1 [i_0])))) : (((((/* implicit */_Bool) var_8)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(14364262108104360458ULL)))) && (((/* implicit */_Bool) arr_9 [i_0] [i_0])))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)56))) | (-5105157124091487976LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) arr_9 [12ULL] [i_0])) : (((/* implicit */int) (signed char)-6))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((var_5) != (((/* implicit */long long int) var_2))))))))));
                    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_15))));
                }
            } 
        } 
    }
    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        arr_16 [i_3] = ((/* implicit */unsigned short) (((+(arr_13 [i_3]))) != (((/* implicit */int) (!(((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) arr_2 [i_3])))))))));
        arr_17 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned int) (signed char)-62))))) > (min(((+(14364262108104360479ULL))), (((/* implicit */unsigned long long int) (signed char)64))))));
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) 16777215LL))));
        var_20 *= ((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) var_7)), ((-(var_1)))))));
    }
    for (unsigned char i_4 = 3; i_4 < 10; i_4 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
            {
                for (unsigned char i_7 = 2; i_7 < 8; i_7 += 1) 
                {
                    {
                        arr_27 [i_4] [i_4] [i_4] [i_4] = (signed char)-8;
                        var_21 = ((/* implicit */long long int) ((1726282007) >> (((4082481965605191157ULL) - (4082481965605191146ULL)))));
                        var_22 = ((((14364262108104360458ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) (short)32485)) : (((/* implicit */int) arr_20 [i_4 - 2]))))));
                        arr_28 [6] [i_4] [3U] [3U] = ((/* implicit */long long int) ((((/* implicit */int) ((var_9) && (((/* implicit */_Bool) arr_1 [i_4 - 2]))))) & (-1001496004)));
                        var_23 = max((((/* implicit */unsigned int) (unsigned short)48740)), (1959133912U));
                    }
                } 
            } 
        } 
        var_24 += max((((/* implicit */unsigned int) arr_6 [i_4 - 1] [i_4 - 2] [i_4 + 1])), ((+(2335833384U))));
    }
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((var_10) < (((/* implicit */unsigned int) var_2)))) ? (var_14) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8)))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(var_10)))), ((+(var_14)))))) : (4082481965605191157ULL)));
    var_26 = ((/* implicit */signed char) var_15);
    /* LoopNest 3 */
    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 2) 
    {
        for (short i_9 = 0; i_9 < 20; i_9 += 4) 
        {
            for (unsigned short i_10 = 0; i_10 < 20; i_10 += 4) 
            {
                {
                    var_27 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_7 [i_8] [i_8])))) ? (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)2554)))) & (arr_32 [i_8] [i_9] [(_Bool)1]))) : (max((arr_32 [i_8] [i_8] [5]), (arr_32 [i_8] [i_8] [i_8])))));
                    var_28 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_10] [i_10])) >> (((((((/* implicit */_Bool) var_12)) ? (14364262108104360476ULL) : (6316746380933204046ULL))) - (14364262108104360449ULL)))))) ? (((/* implicit */unsigned long long int) ((((14364262108104360443ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)233))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 4082481965605191158ULL)) && (((/* implicit */_Bool) var_8))))) : (((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)54))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)56))))) ? (((/* implicit */unsigned long long int) (+(var_2)))) : (max((((/* implicit */unsigned long long int) (signed char)-65)), (7578891105574626025ULL)))))));
                    var_29 = ((/* implicit */unsigned char) max((((arr_13 [i_10]) ^ (var_2))), (((((/* implicit */int) ((signed char) var_6))) | (var_13)))));
                    arr_37 [i_8] [i_9] [i_10] [i_10] = ((/* implicit */unsigned short) (signed char)-46);
                    var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) % (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) 642586394041131067LL)) ? (((/* implicit */unsigned long long int) -1)) : (arr_10 [15ULL] [i_9] [i_8]))) : (((/* implicit */unsigned long long int) ((-642586394041131074LL) % (((/* implicit */long long int) var_10)))))))) ? (((/* implicit */unsigned long long int) ((max((642586394041131067LL), (((/* implicit */long long int) var_9)))) | (((/* implicit */long long int) ((/* implicit */int) var_9)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9957341032277982103ULL)) ? (4257380393609340328LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */unsigned long long int) arr_35 [i_10] [i_9] [i_8])) / (var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (1959133912U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)5))))))))));
                }
            } 
        } 
    } 
}
