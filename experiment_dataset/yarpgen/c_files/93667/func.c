/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93667
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                    var_11 = ((/* implicit */signed char) (unsigned short)11622);
                    var_12 = ((/* implicit */unsigned short) (_Bool)1);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_3)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_14 ^= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)16)) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)16)) << (((/* implicit */int) (unsigned char)13))))), (9663472400903157758ULL))))));
            var_15 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_9 [i_3] [i_3]) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)131))))));
            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (3849005170U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43471)))));
        }
        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            arr_17 [i_3] [i_5] = ((/* implicit */_Bool) ((unsigned long long int) (_Bool)1));
            arr_18 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)3))))) || (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
        }
        var_17 = ((/* implicit */unsigned short) ((signed char) (!(((((/* implicit */_Bool) -2051237544919457996LL)) || (((/* implicit */_Bool) (unsigned short)65026)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            for (short i_7 = 0; i_7 < 19; i_7 += 4) 
            {
                {
                    var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_15 [i_7])) : (var_6))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) (unsigned char)127)) : (((((/* implicit */int) arr_19 [i_7] [i_6] [i_7])) + (((/* implicit */int) arr_19 [i_7] [i_7] [i_7]))))))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_9 [i_3] [i_7]) + (((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) var_2))))))) ? ((+((+(18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_6])))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 4; i_8 < 12; i_8 += 2) 
    {
        arr_27 [i_8] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)44793)))) >> (((((/* implicit */int) var_4)) + (21806)))));
        arr_28 [(short)0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 14164305714082134727ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)64))) : (2051237544919457996LL)))));
    }
}
