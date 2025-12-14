/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72468
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) 5928620841328264021LL)))))) : (((/* implicit */int) (signed char)127))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) ((((arr_10 [i_0] [i_0] [i_0] [i_0]) != (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))) ? (((((((/* implicit */_Bool) (signed char)-55)) && (((/* implicit */_Bool) (unsigned short)40367)))) ? ((~(var_13))) : (min((((/* implicit */unsigned long long int) (unsigned short)25166)), (var_13))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
                                var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) ((5822925199166529106ULL) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) - (((/* implicit */int) var_12))))))))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) 1764851192);
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)(-32767 - 1))) % (var_1)));
                                var_22 = ((/* implicit */unsigned short) 1127974800);
                            }
                        } 
                    } 
                    var_23 = 18446744073709551613ULL;
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 2; i_5 < 22; i_5 += 2) 
    {
        for (signed char i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            {
                var_24 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_19 [i_5 + 1] [i_5 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53153))) : (-5481145606304785115LL)));
                var_25 *= ((((/* implicit */_Bool) -1127974800)) && (((/* implicit */_Bool) 1147198667U)));
            }
        } 
    } 
}
