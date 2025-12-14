/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87007
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
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_18 = ((/* implicit */_Bool) min((var_18), ((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -664378755)) | (((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */unsigned long long int) 1U)) : (14001002457351321570ULL))))))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (short i_3 = 1; i_3 < 22; i_3 += 4) 
                {
                    {
                        arr_10 [(_Bool)1] [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned char)248)) + (((/* implicit */int) var_17)))), (((/* implicit */int) (!(arr_1 [i_3 + 1]))))));
                        var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((1U) / (2U))))))));
                        arr_11 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(4294967295U)))), (((((/* implicit */_Bool) min(((signed char)106), ((signed char)106)))) ? (max((((/* implicit */unsigned long long int) arr_6 [i_2] [i_1] [i_1] [i_1])), (4256210426760831446ULL))) : (((12431167278905427474ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_4 = 3; i_4 < 14; i_4 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) 12431167278905427482ULL)) ? (((/* implicit */unsigned long long int) arr_12 [i_4 - 3])) : (1207305351081905179ULL)));
            arr_17 [i_4] [i_4 - 3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) var_1)), (((((/* implicit */_Bool) (signed char)-87)) ? (((/* implicit */int) arr_2 [i_4] [i_4] [(unsigned short)18])) : (((/* implicit */int) (short)7332))))))) ? ((-(12431167278905427480ULL))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) | (arr_6 [i_5] [i_5] [i_5] [i_4 - 1]))))))));
        }
        arr_18 [12LL] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) arr_15 [i_4]))))) <= (9U))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)-64)), ((short)0))))) ^ (arr_16 [i_4 - 3] [i_4])))));
    }
    for (long long int i_6 = 0; i_6 < 10; i_6 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_7 = 1; i_7 < 8; i_7 += 4) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (short i_9 = 0; i_9 < 10; i_9 += 3) 
                {
                    {
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((((/* implicit */int) (signed char)79)) * (((/* implicit */int) (_Bool)1))))))))))));
                        var_22 = ((/* implicit */int) (_Bool)1);
                        var_23 += ((/* implicit */short) 0U);
                        var_24 = ((/* implicit */long long int) min((max((arr_16 [i_9] [i_9]), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_20 [i_7])) : (((/* implicit */int) (short)-525))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_16 [i_7 - 1] [i_7 + 2])))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 4) 
        {
            for (long long int i_11 = 0; i_11 < 10; i_11 += 3) 
            {
                for (int i_12 = 0; i_12 < 10; i_12 += 2) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */int) (_Bool)0)) : (2147483630))) / ((~((+(((/* implicit */int) arr_22 [i_6] [i_6] [i_6])))))))))));
                        arr_35 [i_6] [i_11] [i_11] [i_6] [i_6] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_6] [i_10] [i_6])))))));
                        arr_36 [i_6] = ((/* implicit */signed char) min((64424509440ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_6] [i_10] [(_Bool)1] [i_11] [2LL] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32760))) : (8151017080934239571LL)))) && (((/* implicit */_Bool) (signed char)-1)))))));
                    }
                } 
            } 
        } 
        var_26 &= ((/* implicit */long long int) arr_7 [i_6] [i_6] [18LL]);
    }
    var_27 = ((/* implicit */short) var_16);
    var_28 = ((((((/* implicit */_Bool) 769390236U)) ? (36028796884746240ULL) : (6015576794804124140ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))));
    var_29 = (~(min((((unsigned long long int) 0LL)), (12431167278905427474ULL))));
}
