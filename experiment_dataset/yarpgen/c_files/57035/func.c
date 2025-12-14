/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57035
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
    var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-1780336428)))) ? (((unsigned long long int) (signed char)13)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)1587)) > (((/* implicit */int) (unsigned short)65531))))))))) || (((/* implicit */_Bool) var_3)))))));
    var_11 = (unsigned short)0;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-40)) ? (-792630526) : (((/* implicit */int) (signed char)-8)))))));
                    var_13 = ((/* implicit */short) ((18446744073709551600ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3)))));
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_1)) * (((/* implicit */int) var_5)))) / (((/* implicit */int) var_0))));
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)36716)) : (((/* implicit */int) var_0))));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            for (short i_5 = 2; i_5 < 10; i_5 += 3) 
            {
                for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    {
                        var_16 = (+(((/* implicit */int) (unsigned short)65524)));
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)64437))) ? (((((/* implicit */_Bool) (unsigned short)65512)) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)-8)))) : (((/* implicit */int) ((unsigned short) var_4)))));
                        var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))));
                    }
                } 
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned short) (~((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64437))) : (15ULL)))))));
    /* LoopSeq 1 */
    for (int i_7 = 1; i_7 < 12; i_7 += 4) 
    {
        var_20 = ((((((((/* implicit */int) (unsigned short)49883)) * (((/* implicit */int) (unsigned short)1101)))) >> (((((/* implicit */_Bool) (unsigned short)19952)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (unsigned short)2857)))))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned short)63)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)37028))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)49883)) == ((-2147483647 - 1))))))) - (37024))));
        arr_24 [(unsigned short)3] [(unsigned short)12] = ((/* implicit */signed char) (unsigned short)65535);
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) -1959432943))));
        var_22 ^= ((/* implicit */short) ((unsigned short) max((((/* implicit */int) var_1)), (-2147483626))));
    }
}
