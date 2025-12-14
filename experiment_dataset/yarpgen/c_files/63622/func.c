/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63622
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
    for (long long int i_0 = 2; i_0 < 10; i_0 += 4) /* same iter space */
    {
        arr_3 [1LL] = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) (short)(-32767 - 1))))));
        /* LoopSeq 2 */
        for (int i_1 = 3; i_1 < 8; i_1 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                var_11 = (~(4035225266123964416LL));
                var_12 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (short)(-32767 - 1)))));
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 10; i_3 += 2) 
                {
                    for (int i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        {
                            var_13 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) (short)-32755)) <= (((/* implicit */int) (short)32763)))))));
                            var_14 = ((/* implicit */short) (-((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32764))) % (var_7)))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_6))))) ? ((~(((/* implicit */int) min(((short)-32759), ((short)32767)))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32757))) : (1587449469955815464LL)))) || (((/* implicit */_Bool) (short)(-32767 - 1))))))));
            }
            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32763))) ^ (((((/* implicit */unsigned int) ((((/* implicit */int) (short)32763)) ^ (((/* implicit */int) var_1))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (short)32751))) & (0U)))))));
            /* LoopSeq 1 */
            for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                arr_16 [i_0] [i_0] [i_5] = ((/* implicit */signed char) var_8);
                var_17 += ((/* implicit */short) (+((~((-(((/* implicit */int) (unsigned short)65517))))))));
            }
            var_18 = (+(((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))));
        }
        for (int i_6 = 3; i_6 < 8; i_6 += 2) /* same iter space */
        {
            var_19 ^= ((/* implicit */long long int) (~(((/* implicit */int) (short)32763))));
            var_20 = ((((/* implicit */unsigned int) ((((((/* implicit */int) (short)(-32767 - 1))) - (((/* implicit */int) var_1)))) / (((/* implicit */int) (short)-32763))))) / (((unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)32767))))));
            arr_20 [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32763)) || (((/* implicit */_Bool) max(((short)-32760), ((short)28927))))));
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((~(2602198290U))), (0U)))) ? ((~(((((/* implicit */int) (short)6690)) ^ (((/* implicit */int) (unsigned short)19)))))) : (((/* implicit */int) (_Bool)1))));
            var_22 &= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)0))));
        }
    }
    for (long long int i_7 = 2; i_7 < 10; i_7 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) / (var_0))) * (var_7))), (max((5950036379038586352ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)(-127 - 1))) - (((/* implicit */int) (short)-25031)))))))));
        arr_23 [(signed char)6] = ((/* implicit */short) ((long long int) (+(((/* implicit */int) (short)-32764)))));
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) var_1))));
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)41)))))))));
        arr_24 [8LL] = ((/* implicit */short) ((signed char) (short)0));
    }
    var_26 = ((/* implicit */short) 5950036379038586352ULL);
    var_27 += ((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) (((-(12496707694670965263ULL))) <= (var_0))))));
}
