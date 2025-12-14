/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80321
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) max(((+(arr_1 [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 = ((/* implicit */long long int) var_3);
            var_15 *= ((/* implicit */unsigned char) ((unsigned int) arr_0 [i_1]));
        }
        /* vectorizable */
        for (signed char i_2 = 2; i_2 < 14; i_2 += 2) 
        {
            var_16 = arr_6 [i_2 + 1] [i_2] [i_2];
            var_17 *= ((/* implicit */unsigned short) ((arr_3 [i_0] [i_2 + 1] [i_2]) >= (arr_3 [i_0] [i_2 + 1] [i_2])));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_18 += (!((_Bool)1));
            var_19 *= ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_3])), (var_5)))));
            arr_10 [i_3] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min(((signed char)11), (var_1))))) >= (max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))))), (arr_6 [i_0] [i_3] [i_3])))));
        }
        for (short i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                for (unsigned int i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    {
                        arr_19 [i_4] [i_5] = ((/* implicit */unsigned char) var_10);
                        var_20 *= ((/* implicit */short) (+((-(((/* implicit */int) (signed char)14))))));
                    }
                } 
            } 
            arr_20 [i_0] [i_4] [i_0] = ((/* implicit */_Bool) max((((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) var_10))));
        }
    }
    for (signed char i_7 = 2; i_7 < 13; i_7 += 2) 
    {
        arr_23 [i_7 - 2] [i_7] = ((/* implicit */signed char) min((min(((unsigned short)61618), (((/* implicit */unsigned short) max(((unsigned char)112), (((/* implicit */unsigned char) (signed char)6))))))), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned char)202)))))));
        arr_24 [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) 11495437650229938255ULL)) ? (680658355) : (((/* implicit */int) (signed char)-7))))) * (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (9223372036854775785LL)))));
        arr_25 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)202)), (3925781059U)))) : (((((/* implicit */_Bool) var_3)) ? (9223372036854775764LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))));
    }
    for (signed char i_8 = 0; i_8 < 18; i_8 += 2) 
    {
        /* LoopNest 2 */
        for (short i_9 = 2; i_9 < 16; i_9 += 3) 
        {
            for (short i_10 = 0; i_10 < 18; i_10 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_30 [i_8])) : (((/* implicit */int) arr_30 [i_8])))) - ((((-(((/* implicit */int) arr_27 [i_10])))) - ((+(((/* implicit */int) var_4))))))));
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)210))) ? (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) -310458617846388956LL)))))) : ((-(((/* implicit */int) (_Bool)1)))))))));
                    var_23 *= ((/* implicit */short) ((_Bool) 9223372036854775784LL));
                }
            } 
        } 
        var_24 -= ((/* implicit */_Bool) ((((/* implicit */int) var_9)) + (((((/* implicit */int) arr_34 [i_8] [i_8] [i_8])) - (((/* implicit */int) var_12))))));
        arr_35 [i_8] [i_8] = ((/* implicit */unsigned short) var_12);
    }
    var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_3), (((/* implicit */int) var_11)))))));
}
