/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78124
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_16 = ((/* implicit */long long int) max((max((4294967277U), (16U))), (((/* implicit */unsigned int) (unsigned short)41021))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)23967)) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_0]))) : (arr_2 [(unsigned char)2] [i_1] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
            arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64438))) : (arr_3 [i_0])));
            var_17 = ((/* implicit */unsigned char) 4294967277U);
        }
        for (long long int i_2 = 0; i_2 < 21; i_2 += 1) /* same iter space */
        {
            var_18 &= ((/* implicit */unsigned char) ((max(((~(arr_2 [i_0] [i_2] [i_2]))), (((/* implicit */long long int) ((((/* implicit */int) var_1)) % (((/* implicit */int) var_5))))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)23967)) ? (((/* implicit */int) (unsigned short)511)) : (((/* implicit */int) (unsigned short)23942)))))));
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) (~(min((var_9), (((/* implicit */int) (unsigned short)41553))))));
            arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) (short)-14571);
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_3 = 1; i_3 < 20; i_3 += 1) 
            {
                arr_12 [i_0] [i_2] [i_2] [i_3 - 1] = ((/* implicit */_Bool) (signed char)0);
                var_19 += ((/* implicit */unsigned long long int) (unsigned char)12);
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    var_20 = ((((/* implicit */_Bool) (unsigned short)65015)) && (((/* implicit */_Bool) var_6)));
                    arr_15 [i_0] [i_2] [i_3] [i_3] = ((/* implicit */signed char) var_1);
                }
                var_21 -= ((/* implicit */unsigned long long int) (unsigned short)511);
            }
            for (int i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                var_22 *= ((/* implicit */unsigned long long int) var_13);
                arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((((unsigned short) var_12)), (((/* implicit */unsigned short) var_15))));
                var_23 *= (unsigned char)134;
            }
        }
        for (long long int i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) min(((unsigned short)37316), (((/* implicit */unsigned short) (unsigned char)255))))))))));
            arr_22 [i_0] [i_6] [i_6] = ((/* implicit */int) (unsigned short)5764);
            var_25 = ((/* implicit */unsigned char) var_2);
            /* LoopSeq 2 */
            for (short i_7 = 4; i_7 < 20; i_7 += 4) 
            {
                arr_26 [i_7] [i_0] = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */long long int) 35U))));
                /* LoopSeq 1 */
                for (unsigned char i_8 = 2; i_8 < 19; i_8 += 2) 
                {
                    var_26 ^= ((/* implicit */signed char) 8078182708241127805LL);
                    var_27 = ((/* implicit */unsigned char) -6488366856219761614LL);
                    var_28 = ((/* implicit */unsigned char) (-((+(((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) (unsigned short)59780))))))));
                    var_29 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((0U), (((/* implicit */unsigned int) (signed char)-1))))) ? (((unsigned long long int) 21ULL)) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)59771)), (((-5447542598206204213LL) / (4398012956672LL))))))));
                }
            }
            for (long long int i_9 = 0; i_9 < 21; i_9 += 1) 
            {
                /* LoopSeq 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    arr_37 [i_0] [i_9] [i_9] [(unsigned char)3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967260U)) ? (13787400310989952487ULL) : (((/* implicit */unsigned long long int) 2464428124889376752LL))));
                    var_30 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) max((((/* implicit */int) var_2)), (var_9)))))));
                    arr_38 [i_9] [i_6] [i_6] [i_6] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) var_4))))), (((38U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
                }
                for (unsigned int i_11 = 0; i_11 < 21; i_11 += 3) 
                {
                    arr_41 [i_11] [i_0] [i_0] [i_0] [i_0] [i_0] &= var_1;
                    var_31 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) min((((/* implicit */short) (signed char)14)), ((short)21549)))) : (((/* implicit */int) (unsigned short)41590))));
                }
                arr_42 [i_9] = 8078182708241127805LL;
            }
            var_32 *= ((/* implicit */unsigned char) (~((+(min((var_13), (((/* implicit */unsigned int) (unsigned char)120))))))));
        }
        var_33 &= ((/* implicit */long long int) ((((/* implicit */int) var_15)) > (((/* implicit */int) (unsigned short)65024))));
        var_34 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)59781))))) : (0U)))) ? (14282069624866412014ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) min((var_3), (((/* implicit */unsigned char) (_Bool)1))))))))));
    }
    var_35 = ((/* implicit */long long int) 4294967261U);
}
