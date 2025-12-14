/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58889
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_0 [i_0]) - (arr_0 [i_0])))) ? (((((/* implicit */unsigned long long int) arr_0 [i_0])) + (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_1 [i_0]))))));
        var_18 += ((/* implicit */short) (+(((/* implicit */int) (unsigned short)39126))));
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) 409855290253211049LL)) : (arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 4; i_1 < 9; i_1 += 2) /* same iter space */
    {
        var_20 -= ((/* implicit */unsigned short) (signed char)-2);
        var_21 -= ((((/* implicit */_Bool) 1245749286U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (198651710634061775LL));
    }
    /* vectorizable */
    for (unsigned short i_2 = 4; i_2 < 9; i_2 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) (~(2578682485043067995ULL)));
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                {
                    arr_11 [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (-(((6104590662864524968LL) % (((/* implicit */long long int) -1366571790))))));
                    arr_12 [i_2] [i_3] [(_Bool)1] [i_4] = ((/* implicit */short) ((((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) 8127549314145962191ULL))))) == (((/* implicit */int) (unsigned short)25443))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            {
                                var_23 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_2 - 4] [i_2]))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-6104590662864524953LL)))));
                                var_24 = ((/* implicit */signed char) (_Bool)1);
                                arr_17 [i_5] [i_5] [i_5] [i_4] [i_5] [i_5] [i_6] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (unsigned char)47))))));
                                var_25 = ((arr_13 [i_2 - 4] [i_2] [i_2 - 4] [i_2 - 1]) == (((/* implicit */int) var_6)));
                            }
                        } 
                    } 
                    var_26 += ((/* implicit */_Bool) 15868061588666483620ULL);
                }
            } 
        } 
        arr_18 [i_2] [i_2 + 1] = ((/* implicit */long long int) ((arr_3 [i_2 + 1]) ^ (arr_3 [i_2 + 3])));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 15; i_7 += 3) 
    {
        arr_22 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1033738914)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 11085133403143979622ULL)))))));
        /* LoopSeq 1 */
        for (signed char i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 4) 
            {
                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) 6104590662864524968LL)) || (((/* implicit */_Bool) arr_19 [i_7] [i_9])))))));
                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) 8095102659508699315ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((unsigned long long int) (_Bool)1))));
            }
            var_29 = ((/* implicit */unsigned int) (~(11927457451793301821ULL)));
        }
        var_30 ^= ((/* implicit */_Bool) var_9);
    }
    var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) min((var_1), (var_1)))) ? (((var_6) ? (6519286621916249795ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29330))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)11795))))))) : ((~(var_11)))));
    var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6104590662864524958LL)) ? (639718951) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) (~((~(6104590662864524958LL)))))) : (((unsigned long long int) (~(var_13))))));
}
