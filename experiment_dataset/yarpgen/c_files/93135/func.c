/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93135
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
    for (long long int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1792))) : (7798644955422899383LL)))) ? (-7798644955422899384LL) : (((/* implicit */long long int) -1)))) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_12)))) ? (((unsigned int) var_3)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)91)) ? (var_12) : (-1)))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (0) : (((/* implicit */int) (_Bool)0))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) ((unsigned long long int) (((!(((/* implicit */_Bool) var_5)))) ? (var_1) : (((/* implicit */int) ((signed char) var_13))))));
    var_16 ^= var_13;
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            {
                arr_11 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) (_Bool)1)))));
                arr_12 [i_2] [i_2] [i_2] = (unsigned char)118;
                /* LoopNest 3 */
                for (unsigned char i_4 = 2; i_4 < 14; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        for (signed char i_6 = 2; i_6 < 13; i_6 += 4) 
                        {
                            {
                                arr_22 [i_2] [i_3] [i_2] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((-3607693900172072030LL), (((/* implicit */long long int) (signed char)-122))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)8590))))) : (((unsigned int) arr_20 [i_3]))));
                                arr_23 [i_2] [i_2] [i_2] [i_2] [i_6] [i_3] [i_3] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_14 [i_2] [i_3] [i_2] [i_5]) : (((/* implicit */int) arr_13 [i_3] [i_3] [i_5] [i_6]))))) ? (((/* implicit */int) arr_16 [i_4 + 1] [i_6 + 1] [i_6 + 1] [i_6])) : (((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (0) : (arr_20 [i_2]))))));
                            }
                        } 
                    } 
                } 
                arr_24 [i_2] [i_3] = ((/* implicit */long long int) 0);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 15; i_7 += 3) 
                {
                    for (short i_8 = 4; i_8 < 14; i_8 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */int) (-((~(var_13)))));
                            var_18 = ((/* implicit */long long int) (~((-(((unsigned int) 1607871409942910496LL))))));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) arr_28 [i_8] [i_2] [i_2] [i_7] [i_2] [i_2])) : (-9LL)))) ? (((/* implicit */unsigned long long int) (~(-8069154285945067349LL)))) : (((unsigned long long int) var_3)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 15002893075005898297ULL)) ? (-1) : (1660483172)))) ? (((/* implicit */unsigned long long int) (-(-793563069920027558LL)))) : (((((/* implicit */_Bool) arr_19 [i_2] [i_3] [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned long long int) 2879216144252797414LL)) : (8713315559166838211ULL)))))));
                            arr_29 [i_7] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_26 [i_2] [i_2] [i_7] [i_8])))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_6))))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)114))) ^ (-7798644955422899389LL)))))) ? ((+((-(7798644955422899364LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_16 [i_8] [i_8] [i_8 - 2] [i_8])) : (((/* implicit */int) (!(((/* implicit */_Bool) 140600049401856LL))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
