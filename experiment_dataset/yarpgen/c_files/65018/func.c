/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65018
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) (~(min(((-(((/* implicit */int) (short)-12665)))), (((/* implicit */int) (signed char)-73))))));
                                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) min(((signed char)-58), (var_9)))))) * (((/* implicit */int) ((_Bool) (signed char)-57))))))));
                                var_17 |= ((/* implicit */short) min((var_4), (((/* implicit */unsigned int) ((max((-1917494956327551081LL), (((/* implicit */long long int) var_7)))) < (((/* implicit */long long int) (+(var_5)))))))));
                            }
                        } 
                    } 
                    var_18 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) (signed char)85)))));
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        var_19 += ((/* implicit */unsigned int) ((short) (signed char)-71));
                        var_20 = ((/* implicit */signed char) min((((/* implicit */int) var_7)), (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-67)))), (((((/* implicit */int) var_1)) & (((/* implicit */int) var_7))))))));
                    }
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_9))));
                        var_22 = ((/* implicit */unsigned char) (~((-(5U)))));
                        var_23 += ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) min(((-(var_14))), (((/* implicit */unsigned int) var_11))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 20; i_8 += 1) 
        {
            for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) 
            {
                for (signed char i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    {
                        var_25 -= ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)0))));
                        var_26 = ((/* implicit */short) (-(((/* implicit */int) ((signed char) (short)26877)))));
                        var_27 = ((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))));
                        var_28 = ((/* implicit */unsigned short) (-(var_5)));
                        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)76)) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) (short)7680))));
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (var_14) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-8)))))));
        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-26878)) ? (((/* implicit */unsigned int) -903107021)) : (1672084136U)));
        var_32 -= ((/* implicit */short) (-(((((/* implicit */_Bool) (short)63)) ? (((/* implicit */int) (signed char)71)) : (((/* implicit */int) var_2))))));
        var_33 *= ((((/* implicit */int) var_7)) <= (((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */int) var_7)))));
    }
    for (unsigned int i_11 = 0; i_11 < 20; i_11 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_12 = 0; i_12 < 20; i_12 += 3) 
        {
            for (unsigned char i_13 = 0; i_13 < 20; i_13 += 3) 
            {
                {
                    var_34 = ((/* implicit */unsigned short) ((var_0) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                    /* LoopSeq 3 */
                    for (signed char i_14 = 0; i_14 < 20; i_14 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-73)))))) & ((~(var_10))))), (((/* implicit */unsigned long long int) ((unsigned char) (+(((/* implicit */int) (short)-18372))))))));
                        var_36 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)76))) * (var_0)))))));
                    }
                    for (unsigned int i_15 = 0; i_15 < 20; i_15 += 2) /* same iter space */
                    {
                        var_37 ^= (-(((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_13)))))));
                        var_38 |= ((/* implicit */signed char) (~(var_0)));
                        var_39 = ((/* implicit */unsigned long long int) ((signed char) min((var_12), (var_12))));
                        var_40 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) var_3))))));
                        var_41 = ((/* implicit */signed char) (~(((/* implicit */int) max((var_3), (var_9))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_16 = 0; i_16 < 20; i_16 += 2) /* same iter space */
                    {
                        var_42 = ((/* implicit */signed char) ((short) (short)7707));
                        var_43 = ((/* implicit */long long int) var_4);
                        var_44 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-109))));
                        var_45 = ((/* implicit */_Bool) ((((int) (unsigned char)25)) | ((+(((/* implicit */int) var_9))))));
                    }
                }
            } 
        } 
        var_46 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_3)), (-6291064793430695373LL)))) : (((var_10) - (((/* implicit */unsigned long long int) var_4)))))))));
        var_47 = ((/* implicit */short) (~(-1166460242)));
        var_48 += ((/* implicit */short) ((((/* implicit */_Bool) max(((-(18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)-26907)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) (signed char)74)), ((short)-26874))))))) : (((/* implicit */int) min((((_Bool) (signed char)-77)), (((_Bool) (signed char)-109)))))));
    }
    for (unsigned int i_17 = 0; i_17 < 20; i_17 += 3) /* same iter space */
    {
        var_49 |= ((/* implicit */unsigned int) min(((~(var_10))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6)))))));
        var_50 = ((/* implicit */signed char) (~(((unsigned int) var_10))));
    }
}
