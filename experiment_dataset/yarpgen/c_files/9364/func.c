/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9364
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
    var_18 = ((/* implicit */unsigned short) (((!(((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (unsigned char)64)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_11)));
    var_19 = ((/* implicit */unsigned char) max((var_19), ((unsigned char)109)));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */short) 0);
                        var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (arr_6 [i_1] [i_2] [i_3])))) ? (min((((/* implicit */unsigned long long int) var_3)), (arr_6 [i_0] [(unsigned short)12] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)4747))) < (arr_4 [i_0] [i_0] [i_0])))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (~((~(((/* implicit */int) var_12)))))))));
        var_23 ^= ((/* implicit */unsigned int) var_6);
        var_24 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) ((short) 8497809431226831734LL))) * (((/* implicit */int) (unsigned char)149)))));
    }
    for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        var_25 = ((((((-8497809431226831721LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40020))))) ? ((+(1797845566928580170LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21763))) : (1073739776U)))))) / (((/* implicit */long long int) (~(min((((/* implicit */int) var_12)), (var_16)))))));
        var_26 = ((/* implicit */_Bool) var_13);
        var_27 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)3072)) / (((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_0 [i_4])) : (((((/* implicit */_Bool) (unsigned char)61)) ? (var_16) : (((/* implicit */int) var_12)))))) / (min((((int) var_1)), (((/* implicit */int) (unsigned short)3072))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                for (unsigned short i_8 = 2; i_8 < 12; i_8 += 2) 
                {
                    {
                        var_28 = ((((arr_20 [i_7] [i_8 + 2]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31044))))) / (((/* implicit */long long int) ((/* implicit */int) ((short) (signed char)100)))));
                        arr_25 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((((/* implicit */int) var_15)) << (((var_0) + (7130223474190337545LL))))) : (((/* implicit */int) ((((/* implicit */_Bool) -8497809431226831721LL)) && (((/* implicit */_Bool) 5719366594314768598ULL)))))));
                        var_29 = ((/* implicit */signed char) (+(((/* implicit */int) arr_22 [i_8 - 2] [i_8 + 2] [i_8 - 2]))));
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)21763)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_10 [i_8] [6] [i_8 + 1] [i_8] [i_8]))));
                    }
                } 
            } 
            arr_26 [i_5] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_23 [i_5])) ? (var_7) : (arr_7 [i_5] [(unsigned short)4])))));
        }
        arr_27 [i_5] [i_5] = ((/* implicit */unsigned short) ((_Bool) var_3));
    }
    var_31 = ((/* implicit */unsigned char) min((2147483647), ((+(((((/* implicit */int) (unsigned short)25508)) - (((/* implicit */int) (signed char)-77))))))));
    var_32 = ((/* implicit */long long int) (unsigned short)37999);
}
