/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66785
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
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)71))) ? ((((_Bool)0) ? (((/* implicit */int) (unsigned short)16736)) : (((/* implicit */int) (unsigned short)48808)))) : (((/* implicit */int) (unsigned short)48824)))));
                    arr_10 [(unsigned char)19] [i_0] [i_1] = ((unsigned char) (signed char)-45);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 2336467006U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (3322172497297055625LL))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (-1831248877162217666LL) : (-9223372036854775805LL)))) ? (((((/* implicit */_Bool) 2338285812236817968ULL)) ? (((/* implicit */int) (unsigned short)16728)) : (-278079500))) : (((/* implicit */int) (unsigned char)69))))));
                                arr_16 [i_0] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */int) 1958500289U);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 22; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            {
                                arr_22 [i_6] [i_6] [i_2] [i_5] [i_6] [6ULL] &= ((/* implicit */short) ((unsigned char) (unsigned short)34413));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)222)) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) (signed char)-36))))) ? (((/* implicit */int) ((signed char) -21389396917688404LL))) : (((int) (unsigned char)133))))) ? (((int) ((((/* implicit */_Bool) 2078443834)) ? (((/* implicit */int) (unsigned char)99)) : (((/* implicit */int) (unsigned short)61599))))) : (((((/* implicit */_Bool) ((unsigned short) (signed char)-71))) ? (((/* implicit */int) (unsigned char)212)) : (((/* implicit */int) ((unsigned char) (unsigned char)90)))))));
                                var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9961189571484259416ULL)) ? (((/* implicit */int) ((unsigned char) -1091908882))) : (((/* implicit */int) ((unsigned short) (unsigned char)26)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8795556151296ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)108))) : (15209921358978531530ULL)))) ? (7325997615859228794ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)-97)))))));
}
