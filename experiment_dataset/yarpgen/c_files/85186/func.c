/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85186
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            arr_6 [i_0] [i_0] [i_1] &= ((/* implicit */signed char) ((arr_5 [i_1 + 3] [i_1 + 3]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-78)))));
            var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) ((((((/* implicit */int) var_3)) | (((/* implicit */int) (short)-8034)))) ^ ((~(((/* implicit */int) var_8)))))))));
            var_12 = ((((/* implicit */int) var_8)) << (((var_4) - (6919690760571513362ULL))));
            var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) arr_2 [i_0]))));
        }
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            arr_11 [i_0] = ((/* implicit */short) ((var_4) > (((((/* implicit */_Bool) 15241745626621701822ULL)) ? (8773632351594143838ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2)))))));
            var_14 = ((((/* implicit */_Bool) (~(var_4)))) || ((_Bool)1));
            arr_12 [2] [2] = ((/* implicit */short) (_Bool)1);
        }
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
        {
            arr_16 [i_0] = var_0;
            arr_17 [i_0] [i_0] [i_3] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (unsigned char)149)) & (((/* implicit */int) var_0)))));
            arr_18 [(unsigned short)11] [i_0] [i_3] = ((int) 8142733935737001983LL);
            var_15 |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) != (var_4))))) - (((((/* implicit */_Bool) arr_5 [i_0] [i_3])) ? (arr_9 [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))));
            var_16 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) ^ (arr_1 [i_0])))) : (11140106433554721907ULL)));
        }
        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
        {
            arr_22 [i_4] = ((/* implicit */unsigned int) ((unsigned char) (short)1833));
            var_17 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) 1071062786578097981ULL))))) : ((+(((/* implicit */int) (unsigned short)61902))))));
        }
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 13; i_6 += 2) 
            {
                for (short i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_0] [i_5] [i_5])) >= (((/* implicit */int) arr_19 [i_5] [i_6] [i_7]))));
                        var_19 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 2) 
    {
        arr_33 [i_8] [i_8] = ((/* implicit */int) ((long long int) max((arr_31 [i_8]), (((/* implicit */unsigned long long int) (unsigned char)149)))));
        arr_34 [3ULL] [i_8] = ((/* implicit */_Bool) (+((~(((int) arr_31 [i_8]))))));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)5)))))));
    }
    var_21 = ((/* implicit */unsigned long long int) ((long long int) (((!((_Bool)0))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)-32758)) : (((/* implicit */int) (unsigned char)47))))) : (var_5))));
    /* LoopSeq 1 */
    for (int i_9 = 1; i_9 < 21; i_9 += 2) 
    {
        arr_37 [i_9] = ((((/* implicit */_Bool) 3787466448143778570ULL)) ? (((/* implicit */int) (short)32757)) : (((/* implicit */int) (short)11972)));
        /* LoopNest 3 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (long long int i_11 = 1; i_11 < 24; i_11 += 1) 
            {
                for (signed char i_12 = 0; i_12 < 25; i_12 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (unsigned short)52275))))) ? (((unsigned long long int) var_2)) : (var_4))), (((unsigned long long int) ((((/* implicit */_Bool) (short)-18081)) || (((/* implicit */_Bool) var_8))))))))));
                        var_23 = ((/* implicit */unsigned long long int) (+(((var_9) ^ (((/* implicit */int) min((arr_46 [i_9] [i_10] [i_11] [i_12]), (((/* implicit */short) (unsigned char)149)))))))));
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))))));
                    }
                } 
            } 
        } 
    }
}
