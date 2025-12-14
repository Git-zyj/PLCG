/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90912
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
    var_11 = ((/* implicit */_Bool) max((16687775723697013301ULL), (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (unsigned char)27)))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((max((((/* implicit */int) (unsigned short)53094)), (var_7))) != (((/* implicit */int) max((arr_1 [i_0 - 1]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)141))))))))));
        var_12 = ((/* implicit */int) min((var_12), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)53090)) : (((/* implicit */int) (((~(2865289165U))) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
        var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((long long int) (_Bool)1))) : (16687775723697013301ULL)))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_2)) : (var_7))), ((-(((/* implicit */int) (signed char)-120))))))) : (min((((/* implicit */long long int) (unsigned short)0)), (-6424727388878115451LL))));
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 20; i_1 += 4) 
    {
        var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_1 - 1]))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 3) 
        {
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 1254168094U))));
            var_16 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) var_3)))));
            /* LoopSeq 2 */
            for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                /* LoopNest 2 */
                for (short i_4 = 1; i_4 < 20; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        {
                            var_17 |= ((/* implicit */int) ((((unsigned long long int) var_9)) << (((((/* implicit */int) var_5)) - (20026)))));
                            var_18 = ((/* implicit */long long int) 780255727U);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    for (int i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        {
                            var_19 ^= ((/* implicit */long long int) ((((/* implicit */int) var_1)) & (((/* implicit */int) (_Bool)0))));
                            var_20 = ((/* implicit */signed char) 2571090326U);
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (short)10359))) : (var_4)))));
                arr_26 [18] [(_Bool)1] [16LL] = ((/* implicit */unsigned long long int) ((var_7) == (((/* implicit */int) var_5))));
                /* LoopNest 2 */
                for (long long int i_8 = 2; i_8 < 21; i_8 += 1) 
                {
                    for (unsigned short i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        {
                            var_22 = ((2720294530U) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)1)))));
                            var_23 ^= ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_15 [i_1] [i_1 - 2] [i_3] [i_2 + 2]))));
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (!(arr_28 [i_1 + 1] [i_1] [i_1 + 1] [i_2 + 3] [i_8 - 2]))))));
                        }
                    } 
                } 
            }
            for (signed char i_10 = 0; i_10 < 22; i_10 += 4) 
            {
                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) : (-5989653126029400939LL))))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) (~(1758968350012538314ULL)));
                            var_27 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_20 [i_1 + 2] [i_1 + 2] [i_1] [i_1 + 1] [i_1] [i_1 - 2] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [12LL] [12LL] [12LL] [i_10] [12LL] [i_10] [9U]))) : (var_9))) & (((/* implicit */unsigned int) var_7))));
                            var_28 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            }
        }
        for (long long int i_13 = 0; i_13 < 22; i_13 += 4) 
        {
            var_29 += var_8;
            var_30 += ((/* implicit */signed char) (_Bool)0);
            var_31 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -603590167)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
        }
    }
    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
    {
        /* LoopNest 2 */
        for (short i_15 = 1; i_15 < 22; i_15 += 3) 
        {
            for (unsigned long long int i_16 = 2; i_16 < 22; i_16 += 3) 
            {
                {
                    arr_52 [i_14] [i_16] [i_14] [i_14] = ((/* implicit */long long int) (_Bool)1);
                    var_32 = ((/* implicit */long long int) min((((((/* implicit */int) var_5)) * (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_43 [i_14] [i_16 + 1]))));
                }
            } 
        } 
        arr_53 [i_14] = ((/* implicit */unsigned long long int) (signed char)-125);
    }
}
