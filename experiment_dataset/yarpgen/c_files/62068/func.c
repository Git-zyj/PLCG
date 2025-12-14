/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62068
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 23; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) 2130706432U)) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) : (arr_1 [18]))), (((/* implicit */int) ((unsigned char) var_12))))) + (((/* implicit */int) arr_0 [i_0] [i_0]))));
                var_18 &= ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) ((_Bool) arr_3 [(_Bool)1]))) * (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) <= (((((/* implicit */_Bool) min((((/* implicit */unsigned int) 1991464140)), (4294967295U)))) ? (-8793455516279269870LL) : (max((-8793455516279269871LL), (((/* implicit */long long int) 647043240))))))));
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) == (var_5)));
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_12))));
                var_21 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) -6093265706370883456LL)) ? (max((((/* implicit */unsigned long long int) 1U)), (var_3))) : (max((((unsigned long long int) 9223372036854775789LL)), (((/* implicit */unsigned long long int) ((3416793098U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)203))))))))));
    var_23 = ((/* implicit */_Bool) 9050738170431876536ULL);
    var_24 *= ((/* implicit */unsigned int) ((max((var_14), (((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) (signed char)127))))))) % (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_9)) == (-262144)))) < (((/* implicit */int) var_15)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            var_25 = ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_2] [i_2])) >> (((2200666787U) - (2200666779U)))))) / (((var_11) | (((/* implicit */unsigned long long int) 181834291)))));
            /* LoopNest 3 */
            for (unsigned int i_4 = 1; i_4 < 17; i_4 += 1) 
            {
                for (signed char i_5 = 1; i_5 < 15; i_5 += 2) 
                {
                    for (int i_6 = 1; i_6 < 16; i_6 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)152)) - (var_14)));
                            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) 878174197U))));
                            var_28 *= var_13;
                            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (unsigned char)0))));
                            var_30 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) -1820026626)) | (2200666782U)))) && (((/* implicit */_Bool) 8793455516279269870LL))));
                        }
                    } 
                } 
            } 
            arr_17 [i_2] [i_2] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) >= (8793455516279269870LL))) ? (arr_13 [i_3] [i_3]) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 1889584091)) > (var_3))))));
        }
        var_31 = ((/* implicit */signed char) var_15);
        var_32 *= ((/* implicit */_Bool) arr_5 [i_2] [i_2]);
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 18; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 3) 
            {
                {
                    var_33 = ((((int) arr_15 [i_2] [i_7] [i_8] [i_2])) << (((/* implicit */int) ((((/* implicit */unsigned int) arr_11 [i_8])) == (arr_5 [i_2] [i_8])))));
                    var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_16 [i_2])) / (var_10))) * (((/* implicit */int) var_13))))) ? (((/* implicit */int) arr_4 [i_2] [i_2] [13])) : (min((((((/* implicit */_Bool) 799922054)) ? (834313404) : (((/* implicit */int) (_Bool)0)))), (((((/* implicit */int) arr_21 [i_2] [i_7] [i_8])) | (((/* implicit */int) var_13))))))));
                }
            } 
        } 
    }
}
