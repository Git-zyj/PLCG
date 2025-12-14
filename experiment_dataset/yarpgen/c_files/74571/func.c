/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74571
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
    var_15 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 9223372036854775807LL)) ? ((~(9223372036854775807LL))) : (((((/* implicit */_Bool) 432293452)) ? ((-9223372036854775807LL - 1LL)) : (9223372036854775803LL)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 3244924015336852729LL))));
            var_17 = ((/* implicit */signed char) (+((~(9223372036854775807LL)))));
            arr_8 [i_1 + 3] [i_1 + 3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)102)) ? (5669290528319294623LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8191)))))) ? (((/* implicit */long long int) 3761106918U)) : (((((/* implicit */_Bool) -4398046511104LL)) ? (4398046511101LL) : ((-9223372036854775807LL - 1LL))))));
            arr_9 [i_0] [i_1] [i_1 - 2] = ((/* implicit */unsigned char) -9223372036854775807LL);
        }
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3923776290081841714LL)) ? (((/* implicit */int) (unsigned char)100)) : (((/* implicit */int) (_Bool)1))));
            var_19 -= ((/* implicit */unsigned char) -3923776290081841714LL);
        }
        for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) 3923776290081841702LL))));
            var_21 = ((/* implicit */unsigned short) (unsigned char)62);
            arr_15 [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)192)) - (((/* implicit */int) (signed char)-1))));
            arr_16 [i_0] [i_0] |= ((/* implicit */unsigned char) (signed char)84);
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 2; i_4 < 16; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_5 = 4; i_5 < 16; i_5 += 3) 
            {
                var_22 |= ((((/* implicit */_Bool) (-(3304964151U)))) ? (((((/* implicit */_Bool) -266143092)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 560377834)))) : (((-1LL) * (-1133043469681931692LL))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 1; i_6 < 17; i_6 += 4) 
                {
                    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        {
                            var_23 = 990003131U;
                            var_24 |= (!((_Bool)1));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned short) (unsigned char)103);
                arr_28 [i_0] [i_4] [i_5] = ((/* implicit */unsigned char) (signed char)-7);
            }
            var_26 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(-9223372036854775803LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8194))) : (5612835365566545132LL)));
        }
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)103)) ? (631314998) : (((/* implicit */int) (unsigned char)105))));
        arr_29 [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)84))));
    }
}
