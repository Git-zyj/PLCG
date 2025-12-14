/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96897
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
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        var_18 = ((/* implicit */signed char) (unsigned short)1);
        /* LoopSeq 3 */
        for (unsigned int i_1 = 2; i_1 < 24; i_1 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (+(((((/* implicit */_Bool) ((unsigned char) (unsigned short)16))) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) ((signed char) 6138557843288823571LL))))))))));
            var_20 = ((/* implicit */signed char) (~(12558310959992526677ULL)));
        }
        /* vectorizable */
        for (unsigned int i_2 = 2; i_2 < 24; i_2 += 4) /* same iter space */
        {
            var_21 -= ((/* implicit */unsigned long long int) (unsigned short)60022);
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 25; i_5 += 4) /* same iter space */
                        {
                            arr_16 [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)0))));
                            arr_17 [i_0] [i_3] [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((1265950497491183621LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65520)))));
                        }
                        for (short i_6 = 0; i_6 < 25; i_6 += 4) /* same iter space */
                        {
                            arr_21 [i_0] [i_2] [15U] [(unsigned short)5] [i_3] [i_4] [i_6] = (((_Bool)1) ? ((~(5264693152556780698ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65531)))))));
                            var_22 = ((/* implicit */signed char) ((1603318908U) != (1603318898U)));
                            var_23 = ((/* implicit */unsigned char) (unsigned short)60004);
                            var_24 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) (unsigned char)151)) % (((/* implicit */int) (unsigned char)239)))));
                            arr_22 [i_0] [i_0] = ((/* implicit */unsigned int) ((long long int) 6138557843288823588LL));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 1; i_7 < 24; i_7 += 3) 
                        {
                            arr_25 [i_0] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24))) : (4294967295U)));
                            var_25 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8191)) ? (6201973855838595142LL) : (538360664016923524LL)));
                        }
                        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            var_26 *= ((/* implicit */signed char) ((_Bool) (-(((/* implicit */int) (unsigned char)226)))));
                            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (signed char)15)) ? (10530080051767853682ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65531))))))))));
                            arr_29 [i_0 - 1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)46075)) ? (13519455339393747138ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)218)))));
                        }
                    }
                } 
            } 
            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) 7916664021941697910ULL)) ? (3253685693U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)44)))));
        }
        for (unsigned int i_9 = 2; i_9 < 24; i_9 += 4) /* same iter space */
        {
            arr_32 [i_9] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
            var_29 = (-(((((/* implicit */_Bool) 0U)) ? (11509773178800153400ULL) : (121410114142215410ULL))));
        }
    }
    for (unsigned int i_10 = 0; i_10 < 22; i_10 += 3) 
    {
        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)23)))))));
        arr_36 [i_10] [i_10] = ((/* implicit */unsigned long long int) (unsigned short)6585);
    }
    var_31 = ((/* implicit */signed char) (-(var_15)));
    var_32 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11678))) != (var_10)))), ((+((~(262143)))))));
}
